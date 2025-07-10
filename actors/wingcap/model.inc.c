Lights1 wingcap_Eye_Ball__CAP__001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 wingcap_Metal__METAL__001_lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture wingcap_wing_2_ia8[] = {
	#include "[CS] Sugar [WIP]/wingcap/wing_2.ia8.inc.c"
};

Texture wingcap_wing1_ia8[] = {
	#include "[CS] Sugar [WIP]/wingcap/wing1.ia8.inc.c"
};

Texture wingcap_Eye_ci4[] = {
	#include "[CS] Sugar [WIP]/wingcap/Eye.ci4.inc.c"
};

Texture wingcap_Eye_pal_rgba16[] = {
	#include "[CS] Sugar [WIP]/wingcap/Eye.rgba16.pal"
};

Texture wingcap_Metal_Shade_rgba16_rgba16[] = {
	#include "[CS] Sugar [WIP]/wingcap/Metal_Shade.rgba16.inc.c"
};

Texture wingcap_Metal_Light_rgba16_rgba16[] = {
	#include "[CS] Sugar [WIP]/wingcap/Metal_Light.rgba16.inc.c"
};

Vtx wingcap_Wing_Cap_mesh_layer_4_vtx_0[8] = {
	{{{-215, 55, 128}, 0, {1008, 2032}, {0xD4, 0x75, 0x17, 0xFF}}},
	{{{-142, 90, 88}, 0, {-16, 2032}, {0xD5, 0x75, 0x17, 0xFF}}},
	{{{-301, 54, -31}, 0, {1008, -16}, {0xD4, 0x75, 0x17, 0xFF}}},
	{{{-228, 90, -72}, 0, {-16, -16}, {0xD4, 0x75, 0x17, 0xFF}}},
	{{{302, 250, -5}, 0, {1008, -16}, {0x49, 0xA1, 0x2B, 0xFF}}},
	{{{149, 120, -31}, 0, {-16, 2032}, {0x49, 0xA1, 0x2B, 0xFF}}},
	{{{205, 132, -102}, 0, {1008, 2032}, {0x49, 0xA1, 0x2B, 0xFF}}},
	{{{246, 239, 66}, 0, {-16, -16}, {0x49, 0xA1, 0x2B, 0xFF}}},
};

Gfx wingcap_Wing_Cap_mesh_layer_4_tri_0[] = {
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx wingcap_Wing_Cap_mesh_layer_4_vtx_1[8] = {
	{{{-142, 90, 88}, 0, {1008, 2032}, {0xD5, 0x75, 0x17, 0xFF}}},
	{{{-69, 125, 48}, 0, {-16, 2032}, {0xD5, 0x75, 0x17, 0xFF}}},
	{{{-228, 90, -72}, 0, {1008, -16}, {0xD4, 0x75, 0x17, 0xFF}}},
	{{{-156, 124, -111}, 0, {-16, -16}, {0xD5, 0x75, 0x17, 0xFF}}},
	{{{246, 239, 66}, 0, {1008, -16}, {0x49, 0xA1, 0x2B, 0xFF}}},
	{{{93, 109, 38}, 0, {-16, 2032}, {0x48, 0xA1, 0x2B, 0xFF}}},
	{{{149, 120, -31}, 0, {1008, 2032}, {0x49, 0xA1, 0x2B, 0xFF}}},
	{{{190, 227, 135}, 0, {-16, -16}, {0x49, 0xA1, 0x2B, 0xFF}}},
};

Gfx wingcap_Wing_Cap_mesh_layer_4_tri_1[] = {
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx wingcap_Wing_Cap_mesh_layer_4_vtx_2[94] = {
	{{{-37, 140, 108}, 0, {54, 689}, {0x08, 0x6B, 0x44, 0xFF}}},
	{{{-63, 119, 122}, 0, {199, 325}, {0xD4, 0x47, 0x60, 0xFF}}},
	{{{-33, 83, 136}, 0, {176, 496}, {0x12, 0x08, 0x7D, 0xFF}}},
	{{{-69, 49, 124}, 0, {916, 700}, {0xCF, 0xC7, 0x67, 0xFF}}},
	{{{-21, 40, 120}, 0, {978, 559}, {0x29, 0xB7, 0x5F, 0xFF}}},
	{{{-33, 83, 136}, 0, {914, -9}, {0x12, 0x08, 0x7D, 0xFF}}},
	{{{-69, 49, 124}, 0, {1004, 409}, {0xCF, 0xC7, 0x67, 0xFF}}},
	{{{-98, 46, 90}, 0, {949, 273}, {0x98, 0xC6, 0x2C, 0xFF}}},
	{{{-52, 8, 78}, 0, {914, 563}, {0xEE, 0x85, 0x1B, 0xFF}}},
	{{{96, 129, 32}, 0, {123, 688}, {0x4C, 0x64, 0x13, 0xFF}}},
	{{{69, 123, 60}, 0, {103, 719}, {0x1B, 0x5C, 0x53, 0xFF}}},
	{{{110, 87, 56}, 0, {135, 690}, {0x63, 0x1C, 0x4A, 0xFF}}},
	{{{56, 92, 84}, 0, {96, 886}, {0x07, 0x21, 0x7B, 0xFF}}},
	{{{20, 110, 66}, 0, {70, 743}, {0xC4, 0x42, 0x5B, 0xFF}}},
	{{{4, 57, 65}, 0, {32, 731}, {0xA5, 0xE6, 0x54, 0xFF}}},
	{{{-3, 111, 34}, 0, {62, 571}, {0x98, 0x45, 0x19, 0xFF}}},
	{{{41, 140, 28}, 0, {81, 551}, {0xE8, 0x7B, 0x14, 0xFF}}},
	{{{42, 135, -18}, 0, {76, 334}, {0xED, 0x6F, 0xC5, 0xFF}}},
	{{{-14, 87, 1}, 0, {50, 431}, {0x87, 0x1B, 0xE4, 0xFF}}},
	{{{34, 106, -42}, 0, {76, 164}, {0xD7, 0x37, 0x95, 0xFF}}},
	{{{-4, 57, -18}, 0, {33, 325}, {0x96, 0xE6, 0xBF, 0xFF}}},
	{{{20, 38, -34}, 0, {14, 228}, {0xC4, 0xC4, 0xA1, 0xFF}}},
	{{{57, 83, -50}, 0, {93, 56}, {0x06, 0x14, 0x83, 0xFF}}},
	{{{101, 104, -25}, 0, {129, 282}, {0x54, 0x3A, 0xB4, 0xFF}}},
	{{{70, 58, -48}, 0, {171, 111}, {0x22, 0xE5, 0x89, 0xFF}}},
	{{{109, 40, -12}, 0, {163, 357}, {0x64, 0xC7, 0xCB, 0xFF}}},
	{{{122, 73, 8}, 0, {146, 451}, {0x7E, 0x03, 0xF1, 0xFF}}},
	{{{96, 129, 32}, 0, {128, 541}, {0x4C, 0x64, 0x13, 0xFF}}},
	{{{111, 54, 49}, 0, {155, 656}, {0x6A, 0xD9, 0x39, 0xFF}}},
	{{{74, 38, 76}, 0, {173, 779}, {0x29, 0xC3, 0x68, 0xFF}}},
	{{{54, 51, 82}, 0, {172, 913}, {0xF5, 0xDE, 0x7A, 0xFF}}},
	{{{91, 15, 30}, 0, {178, 563}, {0x43, 0x96, 0x15, 0xFF}}},
	{{{71, 23, -27}, 0, {185, 273}, {0x20, 0xA2, 0xB1, 0xFF}}},
	{{{39, 7, -1}, 0, {196, 409}, {0xE7, 0x87, 0xE1, 0xFF}}},
	{{{36, 13, 49}, 0, {195, 599}, {0xE1, 0x94, 0x3B, 0xFF}}},
	{{{54, 51, 82}, 0, {2, 902}, {0xF5, 0xDE, 0x7A, 0xFF}}},
	{{{36, 13, 49}, 0, {2, 653}, {0xE1, 0x94, 0x3B, 0xFF}}},
	{{{1, 29, 23}, 0, {20, 527}, {0x9B, 0xB4, 0x0A, 0xFF}}},
	{{{39, 7, -1}, 0, {-1, 424}, {0xE7, 0x87, 0xE1, 0xFF}}},
	{{{71, 23, -27}, 0, {-8, 205}, {0x20, 0xA2, 0xB1, 0xFF}}},
	{{{70, 58, -48}, 0, {-2, 75}, {0x22, 0xE5, 0x89, 0xFF}}},
	{{{74, 38, 76}, 0, {-8, 728}, {0x29, 0xC3, 0x68, 0xFF}}},
	{{{42, 135, -18}, 0, {56, 267}, {0xED, 0x6F, 0xC5, 0xFF}}},
	{{{101, 104, -25}, 0, {969, 86}, {0x54, 0x3A, 0xB4, 0xFF}}},
	{{{34, 106, -42}, 0, {48, -47}, {0xD7, 0x37, 0x95, 0xFF}}},
	{{{96, 129, 32}, 0, {653, 1019}, {0x4C, 0x64, 0x13, 0xFF}}},
	{{{41, 140, 28}, 0, {-59, 1087}, {0xE8, 0x7B, 0x14, 0xFF}}},
	{{{69, 123, 60}, 0, {60, 967}, {0x1B, 0x5C, 0x53, 0xFF}}},
	{{{96, 129, 32}, 0, {95, 894}, {0x4C, 0x64, 0x13, 0xFF}}},
	{{{41, 140, 28}, 0, {5, 873}, {0xE8, 0x7B, 0x14, 0xFF}}},
	{{{20, 110, 66}, 0, {-13, 967}, {0xC4, 0x42, 0x5B, 0xFF}}},
	{{{-1, 22, 73}, 0, {929, 779}, {0x4E, 0x9C, 0x0D, 0xFF}}},
	{{{23, 69, 49}, 0, {867, 886}, {0x7A, 0xEA, 0xE3, 0xFF}}},
	{{{13, 43, 79}, 0, {928, 913}, {0x6E, 0xC9, 0x1E, 0xFF}}},
	{{{-16, 36, 14}, 0, {899, 690}, {0x37, 0xBC, 0xA4, 0xFF}}},
	{{{-30, 15, 36}, 0, {914, 656}, {0x16, 0x8D, 0xD0, 0xFF}}},
	{{{-52, 8, 78}, 0, {933, 563}, {0xEE, 0x85, 0x1B, 0xFF}}},
	{{{-21, 40, 120}, 0, {947, 599}, {0x29, 0xB7, 0x5F, 0xFF}}},
	{{{-69, 49, 124}, 0, {947, 409}, {0xCF, 0xC7, 0x67, 0xFF}}},
	{{{-89, 27, 50}, 0, {921, 357}, {0xA7, 0xAA, 0xE3, 0xFF}}},
	{{{-98, 46, 90}, 0, {938, 273}, {0x98, 0xC6, 0x2C, 0xFF}}},
	{{{-108, 77, 68}, 0, {928, 111}, {0x81, 0xFF, 0xFD, 0xFF}}},
	{{{-84, 79, 12}, 0, {892, 280}, {0xAF, 0x0B, 0x9F, 0xFF}}},
	{{{-101, 104, 61}, 0, {865, 56}, {0x8C, 0x32, 0xF0, 0xFF}}},
	{{{-101, 104, 61}, 0, {865, 56}, {0x8C, 0x32, 0xF0, 0xFF}}},
	{{{-84, 133, 62}, 0, {849, 181}, {0xAF, 0x62, 0xF8, 0xFF}}},
	{{{-84, 79, 12}, 0, {892, 280}, {0xAF, 0x0B, 0x9F, 0xFF}}},
	{{{-88, 95, 118}, 0, {802, 162}, {0xA6, 0x1C, 0x55, 0xFF}}},
	{{{-108, 77, 68}, 0, {787, 75}, {0x81, 0xFF, 0xFD, 0xFF}}},
	{{{-98, 46, 90}, 0, {782, 176}, {0x98, 0xC6, 0x2C, 0xFF}}},
	{{{-63, 119, 122}, 0, {817, 325}, {0xD4, 0x47, 0x60, 0xFF}}},
	{{{-37, 140, 108}, 0, {829, 431}, {0x08, 0x6B, 0x44, 0xFF}}},
	{{{-57, 140, 35}, 0, {859, 351}, {0xE3, 0x6B, 0xC1, 0xFF}}},
	{{{-4, 139, 83}, 0, {839, 571}, {0x41, 0x6A, 0x18, 0xFF}}},
	{{{10, 88, 113}, 0, {815, 731}, {0x61, 0x0C, 0x51, 0xFF}}},
	{{{-33, 83, 136}, 0, {813, 496}, {0x12, 0x08, 0x7D, 0xFF}}},
	{{{19, 112, 65}, 0, {846, 743}, {0x74, 0x34, 0xFA, 0xFF}}},
	{{{23, 69, 49}, 0, {867, 886}, {0x7A, 0xEA, 0xE3, 0xFF}}},
	{{{13, 43, 79}, 0, {791, 902}, {0x6E, 0xC9, 0x1E, 0xFF}}},
	{{{-21, 40, 120}, 0, {791, 653}, {0x29, 0xB7, 0x5F, 0xFF}}},
	{{{-33, 83, 136}, 0, {804, 582}, {0x12, 0x08, 0x7D, 0xFF}}},
	{{{-1, 22, 73}, 0, {782, 728}, {0x4E, 0x9C, 0x0D, 0xFF}}},
	{{{-26, 82, -3}, 0, {881, 555}, {0x15, 0x0E, 0x84, 0xFF}}},
	{{{-14, 129, 30}, 0, {860, 544}, {0x33, 0x5C, 0xB9, 0xFF}}},
	{{{6, 88, 20}, 0, {873, 719}, {0x5D, 0x13, 0xAC, 0xFF}}},
	{{{-16, 36, 14}, 0, {899, 690}, {0x37, 0xBC, 0xA4, 0xFF}}},
	{{{-66, 33, 16}, 0, {907, 451}, {0xD2, 0xB5, 0xA4, 0xFF}}},
	{{{-30, 15, 36}, 0, {914, 656}, {0x16, 0x8D, 0xD0, 0xFF}}},
	{{{-89, 27, 50}, 0, {921, 357}, {0xA7, 0xAA, 0xE3, 0xFF}}},
	{{{-33, 83, 136}, 0, {799, -9}, {0x12, 0x08, 0x7D, 0xFF}}},
	{{{-63, 119, 122}, 0, {209, 20}, {0xD4, 0x47, 0x60, 0xFF}}},
	{{{-88, 95, 118}, 0, {58, 542}, {0xA6, 0x1C, 0x55, 0xFF}}},
	{{{-69, 49, 124}, 0, {811, 700}, {0xCF, 0xC7, 0x67, 0xFF}}},
	{{{-98, 46, 90}, 0, {239, 1198}, {0x98, 0xC6, 0x2C, 0xFF}}},
};

Gfx wingcap_Wing_Cap_mesh_layer_4_tri_2[] = {
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_4_vtx_2 + 0, 64, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(11, 10, 12, 0, 12, 10, 13, 0),
	gsSP2Triangles(13, 14, 12, 0, 15, 14, 13, 0),
	gsSP2Triangles(16, 15, 13, 0, 16, 17, 15, 0),
	gsSP2Triangles(15, 17, 18, 0, 17, 19, 18, 0),
	gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
	gsSP2Triangles(19, 22, 21, 0, 22, 19, 23, 0),
	gsSP2Triangles(24, 22, 23, 0, 25, 24, 23, 0),
	gsSP2Triangles(25, 23, 26, 0, 26, 23, 27, 0),
	gsSP2Triangles(26, 27, 11, 0, 26, 11, 28, 0),
	gsSP2Triangles(29, 28, 11, 0, 29, 11, 12, 0),
	gsSP2Triangles(29, 12, 30, 0, 31, 28, 29, 0),
	gsSP2Triangles(25, 28, 31, 0, 31, 32, 25, 0),
	gsSP2Triangles(33, 32, 31, 0, 33, 31, 34, 0),
	gsSP2Triangles(29, 34, 31, 0, 24, 25, 32, 0),
	gsSP2Triangles(25, 26, 28, 0, 14, 35, 12, 0),
	gsSP2Triangles(14, 36, 35, 0, 14, 37, 36, 0),
	gsSP2Triangles(18, 37, 14, 0, 18, 14, 15, 0),
	gsSP2Triangles(18, 20, 37, 0, 37, 20, 21, 0),
	gsSP2Triangles(37, 21, 38, 0, 38, 21, 39, 0),
	gsSP2Triangles(21, 40, 39, 0, 22, 40, 21, 0),
	gsSP2Triangles(38, 36, 37, 0, 35, 36, 41, 0),
	gsSP2Triangles(42, 43, 44, 0, 45, 43, 42, 0),
	gsSP2Triangles(45, 42, 46, 0, 47, 48, 49, 0),
	gsSP2Triangles(47, 49, 50, 0, 51, 52, 53, 0),
	gsSP2Triangles(51, 54, 52, 0, 51, 55, 54, 0),
	gsSP2Triangles(56, 55, 51, 0, 51, 57, 56, 0),
	gsSP2Triangles(58, 56, 57, 0, 55, 56, 59, 0),
	gsSP2Triangles(56, 60, 59, 0, 61, 59, 60, 0),
	gsSP2Triangles(59, 61, 62, 0, 61, 63, 62, 0),
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_4_vtx_2 + 64, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 3, 4, 5, 0),
	gsSP2Triangles(1, 3, 6, 0, 7, 1, 6, 0),
	gsSP2Triangles(8, 1, 7, 0, 9, 8, 7, 0),
	gsSP2Triangles(7, 10, 9, 0, 7, 11, 10, 0),
	gsSP2Triangles(9, 10, 12, 0, 12, 10, 13, 0),
	gsSP2Triangles(10, 14, 13, 0, 10, 15, 14, 0),
	gsSP2Triangles(10, 16, 15, 0, 14, 15, 17, 0),
	gsSP2Triangles(8, 2, 1, 0, 18, 2, 8, 0),
	gsSP2Triangles(18, 8, 19, 0, 19, 8, 9, 0),
	gsSP2Triangles(19, 9, 12, 0, 20, 19, 12, 0),
	gsSP2Triangles(13, 20, 12, 0, 21, 20, 13, 0),
	gsSP2Triangles(18, 20, 21, 0, 22, 18, 21, 0),
	gsSP2Triangles(22, 21, 23, 0, 23, 24, 22, 0),
	gsSP2Triangles(24, 2, 22, 0, 22, 2, 18, 0),
	gsSP2Triangles(20, 18, 19, 0, 25, 26, 27, 0),
	gsSP2Triangles(25, 27, 28, 0, 28, 27, 29, 0),
	gsSPEndDisplayList(),
};


Gfx mat_wingcap_Wing_Tip_005[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, wingcap_wing_2_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_Wing_Tip_005[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_wingcap_Wing_Base_005[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, wingcap_wing1_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_Wing_Base_005[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_wingcap_Eye_Ball__CAP__001[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPCopyLightsPlayerPart(EMBLEM),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, wingcap_Eye_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 2),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, wingcap_Eye_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_Eye_Ball__CAP__001[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_wingcap_Metal__METAL__001[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&wingcap_Metal__METAL__001_lights.l, 1),
    gsSPLight(&wingcap_Metal__METAL__001_lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, wingcap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, wingcap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_Metal__METAL__001[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx wingcap_Wing_Cap_mesh_layer_4[] = {
	gsSPDisplayList(mat_wingcap_Wing_Tip_005),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_wingcap_Wing_Tip_005),
	gsSPDisplayList(mat_wingcap_Wing_Base_005),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_wingcap_Wing_Base_005),
	gsSPDisplayList(mat_wingcap_Eye_Ball__CAP__001),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_2),
	gsSPDisplayList(mat_revert_wingcap_Eye_Ball__CAP__001),
	gsSPEndDisplayList(),
};

Gfx wingcap_Wing_Cap_mesh_layer_4_mat_override_Metal__METAL__001_0[] = {
	gsSPDisplayList(mat_wingcap_Wing_Tip_005),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_wingcap_Wing_Tip_005),
	gsSPDisplayList(mat_wingcap_Wing_Base_005),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_wingcap_Wing_Base_005),
	gsSPDisplayList(mat_wingcap_Metal__METAL__001),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_2),
	gsSPDisplayList(mat_revert_wingcap_Metal__METAL__001),
	gsSPEndDisplayList(),
};

Gfx wingcap_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

