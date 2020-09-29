#pragma once

//#include <glm/mat3x3.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>

//#include <entt/core/type_traits.hpp>

namespace MM::Components {
	struct Transform3D {
		glm::vec3	position	{0.0f,0.0f,0.0f};
		glm::vec3	scale		{1.0f,1.0f,1.0f};
		float		rotation	{0.0f};

		glm::mat4x4 getTransform4(void) const {
			//return transformationMatrix(scale, rotation, position);
			glm::mat4x4 res{1};

			//res[2][0] = position.x;
			//res[2][1] = position.y;
			res = glm::translate(res, position);

			//float const s = sinf(rotation);
			//float const c = cosf(rotation);
			//res[0][0] = scale.x * c;
			//res[0][1] = scale.x * s;
			//res[1][0] = scale.y * -s;
			//res[1][1] = scale.y * c;
			res = glm::rotate(res, rotation, glm::vec3(0.f, 0.f, 1.f));

			res = glm::scale(res, scale);

			return res;
		}
	};
} // MM::Components

