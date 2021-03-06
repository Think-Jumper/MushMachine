#include "./screen_director.hpp"

#include <tracy/Tracy.hpp>

#include <mm/logger.hpp>

namespace MM::Services {

bool ScreenDirector::enable(MM::Engine& engine) {
	if (!_update_handle.expired())
		return false;

	{
		_update_handle = engine.addFixedUpdate([this](Engine& e) { this->update(e); });
		auto tmp_lock = _update_handle.lock();
		tmp_lock->priority = -100; // post everything ?
		tmp_lock->name = "ScreenDirector::update";
	}


	// start initial screen
	if (!queued_screen_id.empty()) {
		auto next_screen_id = queued_screen_id;
		auto& next_screen = screens[next_screen_id];

		startScreen(engine, next_screen);

		curr_screen_id = next_screen_id;
	}

	return true;
}

void ScreenDirector::disable(MM::Engine& engine) {
	engine.removeFixedUpdate(_update_handle);
	_update_handle.reset();
}

void ScreenDirector::update(MM::Engine& engine) {
	if (curr_screen_id != queued_screen_id) {
		engine.addFixedDefer([this](MM::Engine& engine) {
			changeScreenTo(engine, queued_screen_id);
		});
	}
}

void ScreenDirector::startScreen(MM::Engine& engine, Screen& screen) {
	ZoneScoped;
	for (auto service_id : screen.start_disable) {
		engine.disableService(service_id);
	}

	for (auto service_id : screen.start_enable) {
		engine.enableService(service_id); // TODO: check return value
	}

	for (auto [i_id, t_id] : screen.start_provide) {
		bool r = engine.provide(i_id, t_id); // TODO: check return value
		assert(r);
	}

	screen.start_fn(engine);
}

void ScreenDirector::endScreen(MM::Engine& engine, Screen& screen) {
	ZoneScoped;
	screen.end_fn(engine);

	for (auto service_id : screen.end_disable) {
		engine.disableService(service_id);
	}

	for (auto service_id : screen.end_enable) {
		engine.enableService(service_id); // TODO: check return value
	}
}

void ScreenDirector::changeScreenTo(MM::Engine& engine, const std::string id) {
	ZoneScoped;

	if (screens.count(id) == 0) {
		SPDLOG_ERROR("tried to change to not defined screen '{}'", id);
		return;
	}

	ZoneText(id.c_str(), id.size());

	auto& curr_screen = screens[curr_screen_id];
	auto& next_screen = screens[id];

	endScreen(engine, curr_screen);

	startScreen(engine, next_screen);

	curr_screen_id = id;
}

void ScreenDirector::queueChangeScreenTo(const std::string& id) {
	ZoneScoped;
	ZoneText(id.c_str(), id.size());

	// TODO: do some checks
	queued_screen_id = id;
}

} // MM::Services

