Lights1 wingcap_HeadEyeSclera_lights = gdSPDefLights1(
	0xBC, 0xBC, 0xBC,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 wingcap_HeadEyePupil_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 wingcap_Wing_Tip_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 wingcap_Wing_Base_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 wingcap_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture wingcap_Eyes_ia8[] = {
	#include "actors/wingcap/Eyes.ia8.inc.c"
};

Texture wingcap_wing_2_ia8[] = {
	#include "actors/wingcap/wing_2.ia8.inc.c"
};

Texture wingcap_wing1_ia8[] = {
	#include "actors/wingcap/wing1.ia8.inc.c"
};

Texture wingcap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/wingcap/Metal_Shade.rgba16.inc.c"
};

Texture wingcap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/wingcap/Metal_Light.rgba16.inc.c"
};

Vtx wingcap_Wing_Cap_mesh_layer_1_vtx_0[81] = {
	{{{-42, 18, 29}, 0, {240, 368}, {0xFA, 0xAE, 0x61, 0xFF}}},
	{{{-70, 12, 3}, 0, {112, 240}, {0xAE, 0xA0, 0x0D, 0xFF}}},
	{{{-44, 1, 2}, 0, {112, 368}, {0xFB, 0x81, 0x07, 0xFF}}},
	{{{-74, 27, 21}, 0, {240, 240}, {0xA2, 0xCD, 0x45, 0xFF}}},
	{{{-67, 49, 34}, 0, {368, 240}, {0xB9, 0x0E, 0x68, 0xFF}}},
	{{{-40, 48, 41}, 0, {368, 368}, {0x02, 0x0C, 0x7E, 0xFF}}},
	{{{-15, 45, 34}, 0, {368, 496}, {0x46, 0x02, 0x6A, 0xFF}}},
	{{{-10, 22, 21}, 0, {240, 496}, {0x54, 0xBB, 0x42, 0xFF}}},
	{{{-18, 10, 5}, 0, {112, 496}, {0x3F, 0x93, 0x10, 0xFF}}},
	{{{-38, 73, 24}, 0, {496, 368}, {0x09, 0x60, 0x52, 0xFF}}},
	{{{-6, 64, 19}, 0, {496, 496}, {0x5F, 0x3D, 0x3B, 0xFF}}},
	{{{1, 39, -1}, 0, {496, 624}, {0x7E, 0xF3, 0x00, 0xFF}}},
	{{{-10, 22, 21}, 0, {368, 624}, {0x54, 0xBB, 0x42, 0xFF}}},
	{{{-18, 10, 5}, 0, {368, 752}, {0x3F, 0x93, 0x10, 0xFF}}},
	{{{-11, 17, -20}, 0, {496, 752}, {0x50, 0xAE, 0xC9, 0xFF}}},
	{{{-43, 13, -26}, 0, {496, 880}, {0xFA, 0x9E, 0xB0, 0xFF}}},
	{{{-44, 1, 2}, 0, {368, 880}, {0xFB, 0x81, 0x07, 0xFF}}},
	{{{-70, 12, 3}, 0, {368, 1008}, {0xAE, 0xA0, 0x0D, 0xFF}}},
	{{{-74, 22, -20}, 0, {496, 1008}, {0xA3, 0xC0, 0xC5, 0xFF}}},
	{{{-67, 44, -35}, 0, {624, 1008}, {0xB8, 0x03, 0x98, 0xFF}}},
	{{{-41, 38, -42}, 0, {624, 880}, {0x00, 0xF1, 0x82, 0xFF}}},
	{{{-15, 39, -35}, 0, {624, 752}, {0x45, 0xF6, 0x96, 0xFF}}},
	{{{-7, 59, -23}, 0, {624, 624}, {0x5F, 0x30, 0xBB, 0xFF}}},
	{{{-12, 76, -4}, 0, {624, 496}, {0x4E, 0x63, 0xF4, 0xFF}}},
	{{{-37, 85, -3}, 0, {624, 368}, {0x0C, 0x7E, 0xF7, 0xFF}}},
	{{{-38, 68, -30}, 0, {752, 368}, {0x08, 0x50, 0x9E, 0xFF}}},
	{{{-7, 59, -23}, 0, {752, 496}, {0x5F, 0x30, 0xBB, 0xFF}}},
	{{{-15, 39, -35}, 0, {880, 496}, {0x45, 0xF6, 0x96, 0xFF}}},
	{{{-41, 38, -42}, 0, {880, 368}, {0x00, 0xF1, 0x82, 0xFF}}},
	{{{-70, 64, -23}, 0, {624, 112}, {0xAC, 0x40, 0xBA, 0xFF}}},
	{{{-64, 81, -4}, 0, {624, 240}, {0xC2, 0x6E, 0xF4, 0xFF}}},
	{{{-82, 47, -1}, 0, {496, 112}, {0x81, 0x0A, 0x00, 0xFF}}},
	{{{-67, 44, -35}, 0, {624, -16}, {0xB8, 0x03, 0x98, 0xFF}}},
	{{{-74, 22, -20}, 0, {496, -16}, {0xA3, 0xC0, 0xC5, 0xFF}}},
	{{{-70, 12, 3}, 0, {368, -16}, {0xAE, 0xA0, 0x0D, 0xFF}}},
	{{{-74, 27, 21}, 0, {368, 112}, {0xA2, 0xCD, 0x45, 0xFF}}},
	{{{-70, 69, 19}, 0, {496, 240}, {0xAF, 0x4D, 0x3C, 0xFF}}},
	{{{19, 17, 2}, 0, {240, 368}, {0xEA, 0xB1, 0x9F, 0xFF}}},
	{{{43, 2, 28}, 0, {112, 240}, {0x2C, 0x8A, 0xF3, 0xFF}}},
	{{{15, 1, 29}, 0, {112, 368}, {0xD9, 0x87, 0xF9, 0xFF}}},
	{{{52, 15, 10}, 0, {240, 240}, {0x47, 0xB0, 0xBB, 0xFF}}},
	{{{53, 38, -3}, 0, {368, 240}, {0x48, 0xF5, 0x98, 0xFF}}},
	{{{27, 46, -10}, 0, {368, 368}, {0x02, 0x0C, 0x82, 0xFF}}},
	{{{2, 52, -3}, 0, {368, 496}, {0xBF, 0x1A, 0x96, 0xFF}}},
	{{{-10, 32, 10}, 0, {240, 496}, {0x99, 0xDC, 0xBE, 0xFF}}},
	{{{-6, 18, 26}, 0, {112, 496}, {0xA0, 0xAF, 0xF0, 0xFF}}},
	{{{34, 71, 6}, 0, {496, 368}, {0x19, 0x5E, 0xAE, 0xFF}}},
	{{{1, 73, 12}, 0, {496, 496}, {0xBC, 0x59, 0xC5, 0xFF}}},
	{{{-15, 52, 32}, 0, {496, 624}, {0x85, 0x1F, 0x00, 0xFF}}},
	{{{-10, 32, 10}, 0, {368, 624}, {0x99, 0xDC, 0xBE, 0xFF}}},
	{{{-6, 18, 26}, 0, {368, 752}, {0xA0, 0xAF, 0xF0, 0xFF}}},
	{{{-11, 27, 51}, 0, {496, 752}, {0x99, 0xCF, 0x37, 0xFF}}},
	{{{18, 12, 57}, 0, {496, 880}, {0xE4, 0xA2, 0x50, 0xFF}}},
	{{{15, 1, 29}, 0, {368, 880}, {0xD9, 0x87, 0xF9, 0xFF}}},
	{{{43, 2, 28}, 0, {368, 1008}, {0x2C, 0x8A, 0xF3, 0xFF}}},
	{{{50, 11, 51}, 0, {496, 1008}, {0x41, 0xA5, 0x3B, 0xFF}}},
	{{{51, 33, 66}, 0, {624, 1008}, {0x45, 0xEA, 0x68, 0xFF}}},
	{{{24, 37, 73}, 0, {624, 880}, {0xFB, 0xF2, 0x7E, 0xFF}}},
	{{{1, 46, 66}, 0, {624, 752}, {0xBB, 0x0E, 0x6A, 0xFF}}},
	{{{0, 68, 54}, 0, {624, 624}, {0xB7, 0x4E, 0x45, 0xFF}}},
	{{{10, 83, 35}, 0, {624, 496}, {0xD9, 0x78, 0x0C, 0xFF}}},
	{{{37, 82, 34}, 0, {624, 368}, {0x20, 0x7B, 0x09, 0xFF}}},
	{{{32, 66, 61}, 0, {752, 368}, {0x14, 0x4E, 0x62, 0xFF}}},
	{{{0, 68, 54}, 0, {752, 496}, {0xB7, 0x4E, 0x45, 0xFF}}},
	{{{1, 46, 66}, 0, {880, 496}, {0xBB, 0x0E, 0x6A, 0xFF}}},
	{{{32, 66, 61}, 0, {752, 368}, {0x14, 0x4E, 0x62, 0xFF}}},
	{{{0, 68, 54}, 0, {752, 496}, {0xB7, 0x4E, 0x45, 0xFF}}},
	{{{24, 37, 73}, 0, {880, 368}, {0xFB, 0xF2, 0x7E, 0xFF}}},
	{{{51, 33, 66}, 0, {624, 1008}, {0x45, 0xEA, 0x68, 0xFF}}},
	{{{61, 51, 54}, 0, {624, 112}, {0x65, 0x20, 0x46, 0xFF}}},
	{{{61, 69, 35}, 0, {624, 240}, {0x60, 0x52, 0x0C, 0xFF}}},
	{{{66, 31, 32}, 0, {496, 112}, {0x7A, 0xDE, 0x00, 0xFF}}},
	{{{51, 33, 66}, 0, {624, -16}, {0x45, 0xEA, 0x68, 0xFF}}},
	{{{50, 11, 51}, 0, {496, -16}, {0x41, 0xA5, 0x3B, 0xFF}}},
	{{{43, 2, 28}, 0, {368, -16}, {0x2C, 0x8A, 0xF3, 0xFF}}},
	{{{52, 15, 10}, 0, {368, 112}, {0x47, 0xB0, 0xBB, 0xFF}}},
	{{{53, 38, -3}, 0, {368, 240}, {0x48, 0xF5, 0x98, 0xFF}}},
	{{{63, 56, 12}, 0, {496, 240}, {0x67, 0x2C, 0xC4, 0xFF}}},
	{{{34, 71, 6}, 0, {496, 368}, {0x19, 0x5E, 0xAE, 0xFF}}},
	{{{27, 46, -10}, 0, {368, 368}, {0x02, 0x0C, 0x82, 0xFF}}},
	{{{37, 82, 34}, 0, {624, 368}, {0x20, 0x7B, 0x09, 0xFF}}},
};

Gfx wingcap_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_1_vtx_0 + 0, 64, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 6, 0, 7, 0),
	gsSP2Triangles(8, 7, 0, 0, 8, 0, 2, 0),
	gsSP2Triangles(6, 9, 5, 0, 6, 10, 9, 0),
	gsSP2Triangles(11, 10, 6, 0, 11, 6, 12, 0),
	gsSP2Triangles(13, 11, 12, 0, 13, 14, 11, 0),
	gsSP2Triangles(15, 14, 13, 0, 15, 13, 16, 0),
	gsSP2Triangles(17, 15, 16, 0, 17, 18, 15, 0),
	gsSP2Triangles(19, 15, 18, 0, 19, 20, 15, 0),
	gsSP2Triangles(15, 20, 21, 0, 15, 21, 14, 0),
	gsSP2Triangles(21, 11, 14, 0, 21, 22, 11, 0),
	gsSP2Triangles(11, 22, 23, 0, 11, 23, 10, 0),
	gsSP2Triangles(23, 9, 10, 0, 23, 24, 9, 0),
	gsSP2Triangles(23, 25, 24, 0, 23, 26, 25, 0),
	gsSP2Triangles(27, 25, 26, 0, 27, 28, 25, 0),
	gsSP2Triangles(25, 28, 19, 0, 25, 19, 29, 0),
	gsSP2Triangles(25, 29, 30, 0, 30, 29, 31, 0),
	gsSP2Triangles(31, 29, 32, 0, 31, 32, 33, 0),
	gsSP2Triangles(31, 33, 34, 0, 31, 34, 35, 0),
	gsSP2Triangles(4, 31, 35, 0, 4, 36, 31, 0),
	gsSP2Triangles(9, 36, 4, 0, 9, 4, 5, 0),
	gsSP2Triangles(9, 30, 36, 0, 9, 24, 30, 0),
	gsSP2Triangles(25, 30, 24, 0, 30, 31, 36, 0),
	gsSP2Triangles(37, 38, 39, 0, 37, 40, 38, 0),
	gsSP2Triangles(37, 41, 40, 0, 37, 42, 41, 0),
	gsSP2Triangles(43, 42, 37, 0, 43, 37, 44, 0),
	gsSP2Triangles(45, 44, 37, 0, 45, 37, 39, 0),
	gsSP2Triangles(43, 46, 42, 0, 43, 47, 46, 0),
	gsSP2Triangles(48, 47, 43, 0, 48, 43, 49, 0),
	gsSP2Triangles(50, 48, 49, 0, 50, 51, 48, 0),
	gsSP2Triangles(52, 51, 50, 0, 52, 50, 53, 0),
	gsSP2Triangles(54, 52, 53, 0, 54, 55, 52, 0),
	gsSP2Triangles(56, 52, 55, 0, 56, 57, 52, 0),
	gsSP2Triangles(52, 57, 58, 0, 52, 58, 51, 0),
	gsSP2Triangles(58, 48, 51, 0, 58, 59, 48, 0),
	gsSP2Triangles(48, 59, 60, 0, 48, 60, 47, 0),
	gsSP2Triangles(60, 46, 47, 0, 60, 61, 46, 0),
	gsSP2Triangles(60, 62, 61, 0, 60, 63, 62, 0),
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_1_vtx_0 + 64, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(1, 3, 4, 0, 1, 4, 5, 0),
	gsSP2Triangles(1, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(7, 5, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
	gsSP2Triangles(12, 7, 11, 0, 12, 13, 7, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 12, 15, 0),
	gsSP2Triangles(14, 6, 13, 0, 14, 16, 6, 0),
	gsSP2Triangles(1, 6, 16, 0, 6, 7, 13, 0),
	gsSPEndDisplayList(),
};

Vtx wingcap_Wing_Cap_mesh_layer_4_vtx_0[12] = {
	{{{-33, 87, -2}, 0, {239, 1147}, {0xEB, 0x6E, 0xC3, 0xFF}}},
	{{{-65, 73, -18}, 0, {497, -158}, {0xE9, 0x67, 0xB9, 0xFF}}},
	{{{-63, 85, 2}, 0, {239, -158}, {0xED, 0x6C, 0xC0, 0xFF}}},
	{{{-34, 77, -22}, 0, {497, 1147}, {0xE9, 0x69, 0xBC, 0xFF}}},
	{{{-36, 65, -37}, 0, {755, 1147}, {0xE7, 0x61, 0xB2, 0xFF}}},
	{{{-66, 60, -32}, 0, {755, -158}, {0xE5, 0x5E, 0xAF, 0xFF}}},
	{{{18, 89, 33}, 0, {239, 1147}, {0x1F, 0x6B, 0x3D, 0xFF}}},
	{{{48, 72, 48}, 0, {497, -158}, {0x21, 0x64, 0x47, 0xFF}}},
	{{{48, 84, 28}, 0, {239, -158}, {0x1D, 0x6A, 0x40, 0xFF}}},
	{{{18, 79, 53}, 0, {497, 1147}, {0x21, 0x66, 0x44, 0xFF}}},
	{{{19, 67, 67}, 0, {755, 1147}, {0x22, 0x5E, 0x4E, 0xFF}}},
	{{{48, 59, 63}, 0, {755, -158}, {0x24, 0x5B, 0x51, 0xFF}}},
};

Gfx wingcap_Wing_Cap_mesh_layer_4_tri_0[] = {
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_4_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(10, 7, 9, 0, 10, 11, 7, 0),
	gsSPEndDisplayList(),
};

Vtx wingcap_Wing_Cap_mesh_layer_4_vtx_1[8] = {
	{{{-141, 12, -124}, 0, {1008, 2032}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-99, 29, -78}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-178, 135, -135}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-136, 152, -89}, 0, {-16, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{174, 38, -119}, 0, {1008, -16}, {0x5A, 0x30, 0x4C, 0xFF}}},
	{{{95, 4, -3}, 0, {-16, 2032}, {0x59, 0x31, 0x4C, 0xFF}}},
	{{{137, -42, -24}, 0, {1008, 2032}, {0x5A, 0x30, 0x4C, 0xFF}}},
	{{{132, 83, -98}, 0, {-16, -16}, {0x5A, 0x31, 0x4C, 0xFF}}},
};

Gfx wingcap_Wing_Cap_mesh_layer_4_tri_1[] = {
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx wingcap_Wing_Cap_mesh_layer_4_vtx_2[8] = {
	{{{-99, 29, -78}, 0, {1008, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-57, 45, -32}, 0, {-16, 2032}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{-136, 152, -89}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-95, 169, -43}, 0, {-16, -16}, {0xA7, 0xED, 0x58, 0xFF}}},
	{{{132, 83, -98}, 0, {1008, -16}, {0x5A, 0x31, 0x4C, 0xFF}}},
	{{{53, 47, 17}, 0, {-16, 2032}, {0x59, 0x31, 0x4C, 0xFF}}},
	{{{95, 4, -3}, 0, {1008, 2032}, {0x59, 0x31, 0x4C, 0xFF}}},
	{{{91, 127, -78}, 0, {-16, -16}, {0x59, 0x30, 0x4C, 0xFF}}},
};

Gfx wingcap_Wing_Cap_mesh_layer_4_tri_2[] = {
	gsSPVertex(wingcap_Wing_Cap_mesh_layer_4_vtx_2 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_wingcap_HeadEyeSclera[] = {
	gsSPSetLights1(wingcap_HeadEyeSclera_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_HeadEyeSclera[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_wingcap_HeadEyePupil[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(wingcap_HeadEyePupil_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, wingcap_Eyes_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_HeadEyePupil[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_wingcap_Wing_Tip[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(wingcap_Wing_Tip_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, wingcap_wing_2_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_Wing_Tip[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_wingcap_Wing_Base[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(wingcap_Wing_Base_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, wingcap_wing1_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_wingcap_Wing_Base[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_wingcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&wingcap_Metal__METAL__lights.l, 1),
    gsSPLight(&wingcap_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
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

Gfx mat_revert_wingcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx wingcap_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_wingcap_HeadEyeSclera),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_wingcap_HeadEyeSclera),
	gsSPEndDisplayList(),
};

Gfx wingcap_Wing_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_wingcap_Metal__METAL_),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_wingcap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx wingcap_Wing_Cap_mesh_layer_4[] = {
	gsSPDisplayList(mat_wingcap_HeadEyePupil),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_wingcap_HeadEyePupil),
	gsSPDisplayList(mat_wingcap_Wing_Tip),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_wingcap_Wing_Tip),
	gsSPDisplayList(mat_wingcap_Wing_Base),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_2),
	gsSPDisplayList(mat_revert_wingcap_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx wingcap_Wing_Cap_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_wingcap_Metal__METAL_),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_0),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_1),
	gsSPDisplayList(wingcap_Wing_Cap_mesh_layer_4_tri_2),
	gsSPDisplayList(mat_revert_wingcap_Metal__METAL_),
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

