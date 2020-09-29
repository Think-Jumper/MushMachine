unsigned char test_zip[] = {
  0x50, 0x4b, 0x03, 0x04, 0x14, 0x00, 0x08, 0x00, 0x08, 0x00, 0xfa, 0x64,
  0x42, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x0d, 0x00, 0x20, 0x00, 0x74, 0x65, 0x73, 0x74, 0x5f, 0x66,
  0x69, 0x6c, 0x65, 0x2e, 0x74, 0x78, 0x74, 0x55, 0x54, 0x0d, 0x00, 0x07,
  0x89, 0x81, 0x55, 0x5c, 0x20, 0x0b, 0x87, 0x5c, 0x89, 0x81, 0x55, 0x5c,
  0x75, 0x78, 0x0b, 0x00, 0x01, 0x04, 0xe8, 0x03, 0x00, 0x00, 0x04, 0xe8,
  0x03, 0x00, 0x00, 0x2b, 0x49, 0x2d, 0x2e, 0x51, 0xb0, 0x72, 0xe1, 0x02,
  0x00, 0x50, 0x4b, 0x07, 0x08, 0x46, 0xb6, 0x5c, 0xe8, 0x0a, 0x00, 0x00,
  0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x4b, 0x03, 0x04, 0x14, 0x00, 0x08,
  0x00, 0x08, 0x00, 0xe1, 0xbc, 0x7e, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x1b, 0x00, 0x20, 0x00, 0x77,
  0x61, 0x6c, 0x6c, 0x5f, 0x63, 0x6f, 0x6e, 0x63, 0x72, 0x65, 0x74, 0x65,
  0x2d, 0x31, 0x5f, 0x73, 0x65, 0x5f, 0x30, 0x2e, 0x32, 0x2e, 0x6a, 0x73,
  0x6f, 0x6e, 0x55, 0x54, 0x0d, 0x00, 0x07, 0x06, 0xf0, 0x9f, 0x5c, 0x06,
  0xf0, 0x9f, 0x5c, 0x06, 0xf0, 0x9f, 0x5c, 0x75, 0x78, 0x0b, 0x00, 0x01,
  0x04, 0xe8, 0x03, 0x00, 0x00, 0x04, 0xe8, 0x03, 0x00, 0x00, 0x95, 0x94,
  0x61, 0x8b, 0x84, 0x20, 0x10, 0x86, 0xbf, 0xf7, 0x2b, 0xc2, 0xcf, 0xb5,
  0xa4, 0xd6, 0xc2, 0xf5, 0x57, 0x8e, 0x25, 0xa4, 0xa4, 0x84, 0xb2, 0x48,
  0xf7, 0x96, 0x63, 0xd9, 0xff, 0x7e, 0x93, 0x9d, 0x1e, 0x0b, 0x67, 0x69,
  0x04, 0xc9, 0x8c, 0x3e, 0xbe, 0x33, 0x0d, 0xef, 0x33, 0x45, 0xed, 0x3c,
  0xde, 0x27, 0xa9, 0x50, 0x8d, 0x71, 0x96, 0xa4, 0x48, 0x4c, 0xac, 0xe7,
  0xa8, 0x46, 0x0f, 0x36, 0x8e, 0x4d, 0x3b, 0xcb, 0x76, 0xe5, 0x9a, 0xe7,
  0xb8, 0x51, 0xbc, 0x29, 0x2e, 0xe4, 0xb2, 0xc8, 0x1e, 0xb9, 0x6d, 0x03,
  0x17, 0xfd, 0xa0, 0xe1, 0xe4, 0xb5, 0x70, 0xb1, 0x87, 0xe8, 0xf4, 0x80,
  0x6a, 0x5a, 0x91, 0x2d, 0x34, 0xb1, 0xb5, 0x17, 0x12, 0xd5, 0x26, 0x2f,
  0xd9, 0xe4, 0x27, 0x1b, 0xaa, 0x5a, 0x58, 0x2b, 0xe0, 0x86, 0x7d, 0xbf,
  0xe6, 0xeb, 0xca, 0xc4, 0x26, 0xed, 0x33, 0x49, 0x7f, 0x9f, 0xa7, 0x5b,
  0x39, 0x9e, 0x9a, 0x47, 0xd1, 0x6d, 0xc7, 0x5d, 0x42, 0x8b, 0x11, 0x12,
  0xb4, 0x74, 0xa1, 0xd7, 0xcd, 0xf0, 0x20, 0xdc, 0xce, 0x77, 0x09, 0x8a,
  0xab, 0xca, 0x06, 0xba, 0x2f, 0xbe, 0x2a, 0x31, 0x83, 0x46, 0x84, 0xa1,
  0x3e, 0x8a, 0x6c, 0xc2, 0x16, 0x47, 0x89, 0x8d, 0x78, 0x85, 0xc0, 0xf5,
  0x35, 0x7e, 0x13, 0xb0, 0x2b, 0x87, 0xfd, 0x45, 0x96, 0xee, 0x6f, 0x8e,
  0x6f, 0x7f, 0x72, 0xb2, 0xd4, 0xcb, 0x21, 0x47, 0x9c, 0x1c, 0xc3, 0x27,
  0x8c, 0x83, 0xfd, 0x20, 0x43, 0x09, 0x07, 0xd1, 0xff, 0x41, 0x96, 0x12,
  0x0e, 0xfa, 0x38, 0x03, 0x05, 0xf7, 0xa8, 0x38, 0xac, 0x2d, 0xa2, 0x4b,
  0xc4, 0xd3, 0x25, 0x8b, 0x89, 0x41, 0x1d, 0xf4, 0x29, 0xae, 0xe3, 0xa4,
  0x3c, 0x25, 0x85, 0x76, 0x8a, 0x1e, 0xff, 0xbc, 0x88, 0xf2, 0xa8, 0x47,
  0x54, 0x11, 0x39, 0x05, 0xb4, 0x3a, 0x9b, 0xcb, 0xd0, 0xda, 0xca, 0x83,
  0x36, 0xb9, 0x49, 0x08, 0x44, 0xf9, 0x45, 0xc5, 0x92, 0xae, 0xa7, 0xa3,
  0xf9, 0x86, 0x72, 0xc6, 0x64, 0x7d, 0x73, 0x77, 0x9b, 0xef, 0x65, 0x73,
  0x36, 0x63, 0x3a, 0x5c, 0x1b, 0x4b, 0x72, 0x36, 0x05, 0x2e, 0x95, 0xbc,
  0x7e, 0x00, 0x50, 0x4b, 0x07, 0x08, 0x20, 0xba, 0x28, 0x91, 0x30, 0x01,
  0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x50, 0x4b, 0x01, 0x02, 0x14, 0x03,
  0x14, 0x00, 0x08, 0x00, 0x08, 0x00, 0xfa, 0x64, 0x42, 0x4e, 0x46, 0xb6,
  0x5c, 0xe8, 0x0a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0d, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x81,
  0x00, 0x00, 0x00, 0x00, 0x74, 0x65, 0x73, 0x74, 0x5f, 0x66, 0x69, 0x6c,
  0x65, 0x2e, 0x74, 0x78, 0x74, 0x55, 0x54, 0x0d, 0x00, 0x07, 0x89, 0x81,
  0x55, 0x5c, 0x20, 0x0b, 0x87, 0x5c, 0x89, 0x81, 0x55, 0x5c, 0x75, 0x78,
  0x0b, 0x00, 0x01, 0x04, 0xe8, 0x03, 0x00, 0x00, 0x04, 0xe8, 0x03, 0x00,
  0x00, 0x50, 0x4b, 0x01, 0x02, 0x14, 0x03, 0x14, 0x00, 0x08, 0x00, 0x08,
  0x00, 0xe1, 0xbc, 0x7e, 0x4e, 0x20, 0xba, 0x28, 0x91, 0x30, 0x01, 0x00,
  0x00, 0xb8, 0x05, 0x00, 0x00, 0x1b, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x81, 0x65, 0x00, 0x00, 0x00, 0x77,
  0x61, 0x6c, 0x6c, 0x5f, 0x63, 0x6f, 0x6e, 0x63, 0x72, 0x65, 0x74, 0x65,
  0x2d, 0x31, 0x5f, 0x73, 0x65, 0x5f, 0x30, 0x2e, 0x32, 0x2e, 0x6a, 0x73,
  0x6f, 0x6e, 0x55, 0x54, 0x0d, 0x00, 0x07, 0x06, 0xf0, 0x9f, 0x5c, 0x06,
  0xf0, 0x9f, 0x5c, 0x06, 0xf0, 0x9f, 0x5c, 0x75, 0x78, 0x0b, 0x00, 0x01,
  0x04, 0xe8, 0x03, 0x00, 0x00, 0x04, 0xe8, 0x03, 0x00, 0x00, 0x50, 0x4b,
  0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0xc4, 0x00,
  0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00
};
unsigned int test_zip_len = 728;
