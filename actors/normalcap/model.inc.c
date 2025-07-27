Lights1 normalcap_HeadEyeSclera_lights = gdSPDefLights1(
	0xBC, 0xBC, 0xBC,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 normalcap_HeadEyePupil_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 normalcap_Metal__METAL__lights = gdSPDefLights1(
	0xFF, 0xFF, 0xFF,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture normalcap_Eyes_ia8[] = {
	#include "actors/normalcap/Eyes.ia8.inc.c"
};

Texture normalcap_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/normalcap/Metal_Shade.rgba16.inc.c"
};

Texture normalcap_Metal_Light_rgba16_rgba16[] = {
	#include "actors/normalcap/Metal_Light.rgba16.inc.c"
};

Vtx normalcap_Normal_Cap_DL_mesh_layer_1_vtx_0[81] = {
	{{{-62, 21, 21}, 0, {240, 368}, {0xFA, 0xAE, 0x61, 0xFF}}},
	{{{-110, 10, -25}, 0, {112, 240}, {0xAE, 0xA0, 0x0D, 0xFF}}},
	{{{-64, -9, -26}, 0, {112, 368}, {0xFB, 0x81, 0x07, 0xFF}}},
	{{{-116, 37, 8}, 0, {240, 240}, {0xA2, 0xCD, 0x45, 0xFF}}},
	{{{-104, 76, 30}, 0, {368, 240}, {0xB9, 0x0E, 0x68, 0xFF}}},
	{{{-57, 74, 42}, 0, {368, 368}, {0x02, 0x0C, 0x7E, 0xFF}}},
	{{{-13, 68, 30}, 0, {368, 496}, {0x46, 0x02, 0x6A, 0xFF}}},
	{{{-5, 27, 8}, 0, {240, 496}, {0x54, 0xBB, 0x42, 0xFF}}},
	{{{-19, 7, -21}, 0, {112, 496}, {0x3F, 0x93, 0x10, 0xFF}}},
	{{{-53, 118, 14}, 0, {496, 368}, {0x09, 0x60, 0x52, 0xFF}}},
	{{{2, 101, 4}, 0, {496, 496}, {0x5F, 0x3D, 0x3B, 0xFF}}},
	{{{15, 59, -30}, 0, {496, 624}, {0x7E, 0xF3, 0x00, 0xFF}}},
	{{{-5, 27, 8}, 0, {368, 624}, {0x54, 0xBB, 0x42, 0xFF}}},
	{{{-19, 7, -21}, 0, {368, 752}, {0x3F, 0x93, 0x10, 0xFF}}},
	{{{-6, 19, -65}, 0, {496, 752}, {0x50, 0xAE, 0xC9, 0xFF}}},
	{{{-62, 12, -75}, 0, {496, 880}, {0xFA, 0x9E, 0xB0, 0xFF}}},
	{{{-64, -9, -26}, 0, {368, 880}, {0xFB, 0x81, 0x07, 0xFF}}},
	{{{-110, 10, -25}, 0, {368, 1008}, {0xAE, 0xA0, 0x0D, 0xFF}}},
	{{{-117, 29, -65}, 0, {496, 1008}, {0xA3, 0xC0, 0xC5, 0xFF}}},
	{{{-105, 66, -90}, 0, {624, 1008}, {0xB8, 0x03, 0x98, 0xFF}}},
	{{{-59, 56, -103}, 0, {624, 880}, {0x00, 0xF1, 0x82, 0xFF}}},
	{{{-14, 58, -90}, 0, {624, 752}, {0x45, 0xF6, 0x96, 0xFF}}},
	{{{1, 93, -69}, 0, {624, 624}, {0x5F, 0x30, 0xBB, 0xFF}}},
	{{{-8, 124, -36}, 0, {624, 496}, {0x4E, 0x63, 0xF4, 0xFF}}},
	{{{-51, 139, -35}, 0, {624, 368}, {0x0C, 0x7E, 0xF7, 0xFF}}},
	{{{-54, 109, -82}, 0, {752, 368}, {0x08, 0x50, 0x9E, 0xFF}}},
	{{{1, 93, -69}, 0, {752, 496}, {0x5F, 0x30, 0xBB, 0xFF}}},
	{{{-14, 58, -90}, 0, {880, 496}, {0x45, 0xF6, 0x96, 0xFF}}},
	{{{-59, 56, -103}, 0, {880, 368}, {0x00, 0xF1, 0x82, 0xFF}}},
	{{{-111, 102, -69}, 0, {624, 112}, {0xAC, 0x40, 0xBA, 0xFF}}},
	{{{-100, 132, -36}, 0, {624, 240}, {0xC2, 0x6E, 0xF4, 0xFF}}},
	{{{-131, 71, -30}, 0, {496, 112}, {0x81, 0x0A, 0x00, 0xFF}}},
	{{{-105, 66, -90}, 0, {624, -16}, {0xB8, 0x03, 0x98, 0xFF}}},
	{{{-117, 29, -65}, 0, {496, -16}, {0xA3, 0xC0, 0xC5, 0xFF}}},
	{{{-110, 10, -25}, 0, {368, -16}, {0xAE, 0xA0, 0x0D, 0xFF}}},
	{{{-116, 37, 8}, 0, {368, 112}, {0xA2, 0xCD, 0x45, 0xFF}}},
	{{{-110, 111, 4}, 0, {496, 240}, {0xAF, 0x4D, 0x3C, 0xFF}}},
	{{{47, 20, -25}, 0, {240, 368}, {0xEA, 0xB1, 0x9F, 0xFF}}},
	{{{89, -7, 21}, 0, {112, 240}, {0x2C, 0x8A, 0xF3, 0xFF}}},
	{{{39, -9, 22}, 0, {112, 368}, {0xD9, 0x87, 0xF9, 0xFF}}},
	{{{104, 16, -12}, 0, {240, 240}, {0x47, 0xB0, 0xBB, 0xFF}}},
	{{{106, 57, -34}, 0, {368, 240}, {0x48, 0xF5, 0x98, 0xFF}}},
	{{{60, 71, -46}, 0, {368, 368}, {0x02, 0x0C, 0x82, 0xFF}}},
	{{{17, 80, -34}, 0, {368, 496}, {0xBF, 0x1A, 0x96, 0xFF}}},
	{{{-4, 45, -12}, 0, {240, 496}, {0x99, 0xDC, 0xBE, 0xFF}}},
	{{{2, 21, 17}, 0, {112, 496}, {0xA0, 0xAF, 0xF0, 0xFF}}},
	{{{72, 114, -18}, 0, {496, 368}, {0x19, 0x5E, 0xAE, 0xFF}}},
	{{{15, 117, -8}, 0, {496, 496}, {0xBC, 0x59, 0xC5, 0xFF}}},
	{{{-13, 81, 27}, 0, {496, 624}, {0x85, 0x1F, 0x00, 0xFF}}},
	{{{-4, 45, -12}, 0, {368, 624}, {0x99, 0xDC, 0xBE, 0xFF}}},
	{{{2, 21, 17}, 0, {368, 752}, {0xA0, 0xAF, 0xF0, 0xFF}}},
	{{{-7, 37, 61}, 0, {496, 752}, {0x99, 0xCF, 0x37, 0xFF}}},
	{{{44, 11, 71}, 0, {496, 880}, {0xE4, 0xA2, 0x50, 0xFF}}},
	{{{39, -9, 22}, 0, {368, 880}, {0xD9, 0x87, 0xF9, 0xFF}}},
	{{{89, -7, 21}, 0, {368, 1008}, {0x2C, 0x8A, 0xF3, 0xFF}}},
	{{{101, 8, 61}, 0, {496, 1008}, {0x41, 0xA5, 0x3B, 0xFF}}},
	{{{103, 47, 87}, 0, {624, 1008}, {0x45, 0xEA, 0x68, 0xFF}}},
	{{{56, 54, 99}, 0, {624, 880}, {0xFB, 0xF2, 0x7E, 0xFF}}},
	{{{14, 71, 87}, 0, {624, 752}, {0xBB, 0x0E, 0x6A, 0xFF}}},
	{{{13, 108, 65}, 0, {624, 624}, {0xB7, 0x4E, 0x45, 0xFF}}},
	{{{31, 134, 32}, 0, {624, 496}, {0xD9, 0x78, 0x0C, 0xFF}}},
	{{{77, 134, 31}, 0, {624, 368}, {0x20, 0x7B, 0x09, 0xFF}}},
	{{{70, 105, 79}, 0, {752, 368}, {0x14, 0x4E, 0x62, 0xFF}}},
	{{{13, 108, 65}, 0, {752, 496}, {0xB7, 0x4E, 0x45, 0xFF}}},
	{{{14, 71, 87}, 0, {880, 496}, {0xBB, 0x0E, 0x6A, 0xFF}}},
	{{{70, 105, 79}, 0, {752, 368}, {0x14, 0x4E, 0x62, 0xFF}}},
	{{{13, 108, 65}, 0, {752, 496}, {0xB7, 0x4E, 0x45, 0xFF}}},
	{{{56, 54, 99}, 0, {880, 368}, {0xFB, 0xF2, 0x7E, 0xFF}}},
	{{{103, 47, 87}, 0, {624, 1008}, {0x45, 0xEA, 0x68, 0xFF}}},
	{{{121, 79, 65}, 0, {624, 112}, {0x65, 0x20, 0x46, 0xFF}}},
	{{{120, 111, 32}, 0, {624, 240}, {0x60, 0x52, 0x0C, 0xFF}}},
	{{{129, 43, 27}, 0, {496, 112}, {0x7A, 0xDE, 0x00, 0xFF}}},
	{{{103, 47, 87}, 0, {624, -16}, {0x45, 0xEA, 0x68, 0xFF}}},
	{{{101, 8, 61}, 0, {496, -16}, {0x41, 0xA5, 0x3B, 0xFF}}},
	{{{89, -7, 21}, 0, {368, -16}, {0x2C, 0x8A, 0xF3, 0xFF}}},
	{{{104, 16, -12}, 0, {368, 112}, {0x47, 0xB0, 0xBB, 0xFF}}},
	{{{106, 57, -34}, 0, {368, 240}, {0x48, 0xF5, 0x98, 0xFF}}},
	{{{123, 88, -8}, 0, {496, 240}, {0x67, 0x2C, 0xC4, 0xFF}}},
	{{{72, 114, -18}, 0, {496, 368}, {0x19, 0x5E, 0xAE, 0xFF}}},
	{{{60, 71, -46}, 0, {368, 368}, {0x02, 0x0C, 0x82, 0xFF}}},
	{{{77, 134, 31}, 0, {624, 368}, {0x20, 0x7B, 0x09, 0xFF}}},
};

Gfx normalcap_Normal_Cap_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(normalcap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 0, 64, 0),
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
	gsSPVertex(normalcap_Normal_Cap_DL_mesh_layer_1_vtx_0 + 64, 17, 0),
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

Vtx normalcap_Normal_Cap_DL_mesh_layer_4_vtx_0[12] = {
	{{{-45, 143, -33}, 0, {239, 1147}, {0xEB, 0x6E, 0xC3, 0xFF}}},
	{{{-100, 117, -60}, 0, {497, -158}, {0xE9, 0x67, 0xB9, 0xFF}}},
	{{{-98, 138, -25}, 0, {239, -158}, {0xED, 0x6C, 0xC0, 0xFF}}},
	{{{-47, 124, -68}, 0, {497, 1147}, {0xE9, 0x69, 0xBC, 0xFF}}},
	{{{-50, 103, -93}, 0, {755, 1147}, {0xE7, 0x61, 0xB2, 0xFF}}},
	{{{-103, 94, -86}, 0, {755, -158}, {0xE5, 0x5E, 0xAF, 0xFF}}},
	{{{45, 146, 28}, 0, {239, 1147}, {0x1F, 0x6B, 0x3D, 0xFF}}},
	{{{97, 115, 56}, 0, {497, -158}, {0x21, 0x64, 0x47, 0xFF}}},
	{{{97, 137, 20}, 0, {239, -158}, {0x1D, 0x6A, 0x40, 0xFF}}},
	{{{45, 127, 63}, 0, {497, 1147}, {0x21, 0x66, 0x44, 0xFF}}},
	{{{45, 107, 89}, 0, {755, 1147}, {0x22, 0x5E, 0x4E, 0xFF}}},
	{{{98, 92, 82}, 0, {755, -158}, {0x24, 0x5B, 0x51, 0xFF}}},
};

Gfx normalcap_Normal_Cap_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(normalcap_Normal_Cap_DL_mesh_layer_4_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(10, 7, 9, 0, 10, 11, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_normalcap_HeadEyeSclera[] = {
	gsSPSetLights1(normalcap_HeadEyeSclera_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_normalcap_HeadEyeSclera[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_normalcap_HeadEyePupil[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPCopyLightsPlayerPart(EMBLEM),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, normalcap_Eyes_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_normalcap_HeadEyePupil[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_normalcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_CULL_BACK, G_TEXTURE_GEN),
	gsSPLight(&normalcap_Metal__METAL__lights.l, 1),
    gsSPLight(&normalcap_Metal__METAL__lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, normalcap_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, normalcap_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_normalcap_Metal__METAL_[] = {
	gsSPGeometryMode(G_TEXTURE_GEN, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx normalcap_Normal_Cap_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_normalcap_HeadEyeSclera),
	gsSPDisplayList(normalcap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_normalcap_HeadEyeSclera),
	gsSPEndDisplayList(),
};

Gfx normalcap_Normal_Cap_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_normalcap_Metal__METAL_),
	gsSPDisplayList(normalcap_Normal_Cap_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_normalcap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx normalcap_Normal_Cap_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_normalcap_HeadEyePupil),
	gsSPDisplayList(normalcap_Normal_Cap_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_normalcap_HeadEyePupil),
	gsSPEndDisplayList(),
};

Gfx normalcap_Normal_Cap_DL_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_normalcap_Metal__METAL_),
	gsSPDisplayList(normalcap_Normal_Cap_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_normalcap_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx normalcap_material_revert_render_settings[] = {
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

