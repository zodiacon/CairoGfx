#pragma once

#include "CairoColor.h"

struct StandardColors {
	inline static const CairoColor Transparent{ 255 / 255.0, 255 / 255.0, 255 };
	inline static const CairoColor AliceBlue{ 240 / 255.0, 248 / 255.0, 255 };
	inline static const CairoColor AntiqueWhite{ 250 / 255.0, 235 / 255.0, 215 };
	inline static const CairoColor Aqua{ 0 / 255.0, 255 / 255.0, 255 };
	inline static const CairoColor Aquamarine{ 127 / 255.0, 255 / 255.0, 212 };
	inline static const CairoColor Azure{ 240 / 255.0, 255 / 255.0, 255 };
	inline static const CairoColor Beige{ 245 / 255.0, 245 / 255.0, 220 };
	inline static const CairoColor Bisque{ 255 / 255.0, 228 / 255.0, 196 };
	inline static const CairoColor Black{ 0 / 255.0, 0 / 255.0, 0 };
	inline static const CairoColor BlanchedAlmond{ 255 / 255.0, 235 / 255.0, 205 };
	inline static const CairoColor Blue{ 0 / 255.0, 0 / 255.0, 255 };
	inline static const CairoColor BlueViolet{ 138 / 255.0, 43 / 255.0, 226 };
	inline static const CairoColor Brown{ 165 / 255.0, 42 / 255.0, 42 };
	inline static const CairoColor BurlyWood{ 222 / 255.0, 184 / 255.0, 135 };
	inline static const CairoColor CadetBlue{ 95 / 255.0, 158 / 255.0, 160 };
	inline static const CairoColor Chartreuse{ 127 / 255.0, 255 / 255.0, 0 };
	inline static const CairoColor Chocolate{ 210 / 255.0, 105 / 255.0, 30 };
	inline static const CairoColor Coral{ 255 / 255.0, 127 / 255.0, 80 };
	inline static const CairoColor CornflowerBlue{ 100 / 255.0, 149 / 255.0, 237 };
	inline static const CairoColor Cornsilk{ 255 / 255.0, 248 / 255.0, 220 };
	inline static const CairoColor Crimson{ 220 / 255.0, 20 / 255.0, 60 };
	inline static const CairoColor Cyan{ 0 / 255.0, 255 / 255.0, 255 };
	inline static const CairoColor DarkBlue{ 0 / 255.0, 0 / 255.0, 139 };
	inline static const CairoColor DarkCyan{ 0 / 255.0, 139 / 255.0, 139 };
	inline static const CairoColor DarkGoldenrod{ 184 / 255.0, 134 / 255.0, 11 };
	inline static const CairoColor DarkGray{ 169 / 255.0, 169 / 255.0, 169 };
	inline static const CairoColor DarkGreen{ 0 / 255.0, 100 / 255.0, 0 };
	inline static const CairoColor DarkKhaki{ 189 / 255.0, 183 / 255.0, 107 };
	inline static const CairoColor DarkMagenta{ 139 / 255.0, 0 / 255.0, 139 };
	inline static const CairoColor DarkOliveGreen{ 85 / 255.0, 107 / 255.0, 47 };
	inline static const CairoColor DarkOrange{ 255 / 255.0, 140 / 255.0, 0 };
	inline static const CairoColor DarkOrchid{ 153 / 255.0, 50 / 255.0, 204 };
	inline static const CairoColor DarkRed{ 139 / 255.0, 0 / 255.0, 0 };
	inline static const CairoColor DarkSalmon{ 233 / 255.0, 150 / 255.0, 122 };
	inline static const CairoColor DarkSeaGreen{ 143 / 255.0, 188 / 255.0, 143 };
	inline static const CairoColor DarkSlateBlue{ 72 / 255.0, 61 / 255.0, 139 };
	inline static const CairoColor DarkSlateGray{ 47 / 255.0, 79 / 255.0, 79 };
	inline static const CairoColor DarkTurquoise{ 0 / 255.0, 206 / 255.0, 209 };
	inline static const CairoColor DarkViolet{ 148 / 255.0, 0 / 255.0, 211 };
	inline static const CairoColor DeepPink{ 255 / 255.0, 20 / 255.0, 147 };
	inline static const CairoColor DeepSkyBlue{ 0 / 255.0, 191 / 255.0, 255 };
	inline static const CairoColor DimGray{ 105 / 255.0, 105 / 255.0, 105 };
	inline static const CairoColor DodgerBlue{ 30 / 255.0, 144 / 255.0, 255 };
	inline static const CairoColor Firebrick{ 178 / 255.0, 34 / 255.0, 34 };
	inline static const CairoColor FloralWhite{ 255 / 255.0, 250 / 255.0, 240 };
	inline static const CairoColor ForestGreen{ 34 / 255.0, 139 / 255.0, 34 };
	inline static const CairoColor Fuchsia{ 255 / 255.0, 0 / 255.0, 255 };
	inline static const CairoColor Gainsboro{ 220 / 255.0, 220 / 255.0, 220 };
	inline static const CairoColor GhostWhite{ 248 / 255.0, 248 / 255.0, 255 };
	inline static const CairoColor Gold{ 255 / 255.0, 215 / 255.0, 0 };
	inline static const CairoColor Goldenrod{ 218 / 255.0, 165 / 255.0, 32 };
	inline static const CairoColor Gray{ 128 / 255.0, 128 / 255.0, 128 };
	inline static const CairoColor Green{ 0 / 255.0, 128 / 255.0, 0 };
	inline static const CairoColor GreenYellow{ 173 / 255.0, 255 / 255.0, 47 };
	inline static const CairoColor Honeydew{ 240 / 255.0, 255 / 255.0, 240 };
	inline static const CairoColor HotPink{ 255 / 255.0, 105 / 255.0, 180 };
	inline static const CairoColor IndianRed{ 205 / 255.0, 92 / 255.0, 92 };
	inline static const CairoColor Indigo{ 75 / 255.0, 0 / 255.0, 130 };
	inline static const CairoColor Ivory{ 255 / 255.0, 255 / 255.0, 240 };
	inline static const CairoColor Khaki{ 240 / 255.0, 230 / 255.0, 140 };
	inline static const CairoColor Lavender{ 230 / 255.0, 230 / 255.0, 250 };
	inline static const CairoColor LavenderBlush{ 255 / 255.0, 240 / 255.0, 245 };
	inline static const CairoColor LawnGreen{ 124 / 255.0, 252 / 255.0, 0 };
	inline static const CairoColor LemonChiffon{ 255 / 255.0, 250 / 255.0, 205 };
	inline static const CairoColor LightBlue{ 173 / 255.0, 216 / 255.0, 230 };
	inline static const CairoColor LightCoral{ 240 / 255.0, 128 / 255.0, 128 };
	inline static const CairoColor LightCyan{ 224 / 255.0, 255 / 255.0, 255 };
	inline static const CairoColor LightGoldenrodYellow{ 250 / 255.0, 250 / 255.0, 210 };
	inline static const CairoColor LightGreen{ 144 / 255.0, 238 / 255.0, 144 };
	inline static const CairoColor LightGray{ 211 / 255.0, 211 / 255.0, 211 };
	inline static const CairoColor LightPink{ 255 / 255.0, 182 / 255.0, 193 };
	inline static const CairoColor LightSalmon{ 255 / 255.0, 160 / 255.0, 122 };
	inline static const CairoColor LightSeaGreen{ 32 / 255.0, 178 / 255.0, 170 };
	inline static const CairoColor LightSkyBlue{ 135 / 255.0, 206 / 255.0, 250 };
	inline static const CairoColor LightSlateGray{ 119 / 255.0, 136 / 255.0, 153 };
	inline static const CairoColor LightSteelBlue{ 176 / 255.0, 196 / 255.0, 222 };
	inline static const CairoColor LightYellow{ 255 / 255.0, 255 / 255.0, 224 };
	inline static const CairoColor Lime{ 0 / 255.0, 255 / 255.0, 0 };
	inline static const CairoColor LimeGreen{ 50 / 255.0, 205 / 255.0, 50 };
	inline static const CairoColor Linen{ 250 / 255.0, 240 / 255.0, 230 };
	inline static const CairoColor Magenta{ 255 / 255.0, 0 / 255.0, 255 };
	inline static const CairoColor Maroon{ 128 / 255.0, 0 / 255.0, 0 };
	inline static const CairoColor MediumAquamarine{ 102 / 255.0, 205 / 255.0, 170 };
	inline static const CairoColor MediumBlue{ 0 / 255.0, 0 / 255.0, 205 };
	inline static const CairoColor MediumOrchid{ 186 / 255.0, 85 / 255.0, 211 };
	inline static const CairoColor MediumPurple{ 147 / 255.0, 112 / 255.0, 219 };
	inline static const CairoColor MediumSeaGreen{ 60 / 255.0, 179 / 255.0, 113 };
	inline static const CairoColor MediumSlateBlue{ 123 / 255.0, 104 / 255.0, 238 };
	inline static const CairoColor MediumSpringGreen{ 0 / 255.0, 250 / 255.0, 154 };
	inline static const CairoColor MediumTurquoise{ 72 / 255.0, 209 / 255.0, 204 };
	inline static const CairoColor MediumVioletRed{ 199 / 255.0, 21 / 255.0, 133 };
	inline static const CairoColor MidnightBlue{ 25 / 255.0, 25 / 255.0, 112 };
	inline static const CairoColor MintCream{ 245 / 255.0, 255 / 255.0, 250 };
	inline static const CairoColor MistyRose{ 255 / 255.0, 228 / 255.0, 225 };
	inline static const CairoColor Moccasin{ 255 / 255.0, 228 / 255.0, 181 };
	inline static const CairoColor NavajoWhite{ 255 / 255.0, 222 / 255.0, 173 };
	inline static const CairoColor Navy{ 0 / 255.0, 0 / 255.0, 128 };
	inline static const CairoColor OldLace{ 253 / 255.0, 245 / 255.0, 230 };
	inline static const CairoColor Olive{ 128 / 255.0, 128 / 255.0, 0 };
	inline static const CairoColor OliveDrab{ 107 / 255.0, 142 / 255.0, 35 };
	inline static const CairoColor Orange{ 255 / 255.0, 165 / 255.0, 0 };
	inline static const CairoColor OrangeRed{ 255 / 255.0, 69 / 255.0, 0 };
	inline static const CairoColor Orchid{ 218 / 255.0, 112 / 255.0, 214 };
	inline static const CairoColor PaleGoldenrod{ 238 / 255.0, 232 / 255.0, 170 };
	inline static const CairoColor PaleGreen{ 152 / 255.0, 251 / 255.0, 152 };
	inline static const CairoColor PaleTurquoise{ 175 / 255.0, 238 / 255.0, 238 };
	inline static const CairoColor PaleVioletRed{ 219 / 255.0, 112 / 255.0, 147 };
	inline static const CairoColor PapayaWhip{ 255 / 255.0, 239 / 255.0, 213 };
	inline static const CairoColor PeachPuff{ 255 / 255.0, 218 / 255.0, 185 };
	inline static const CairoColor Peru{ 205 / 255.0, 133 / 255.0, 63 };
	inline static const CairoColor Pink{ 255 / 255.0, 192 / 255.0, 203 };
	inline static const CairoColor Plum{ 221 / 255.0, 160 / 255.0, 221 };
	inline static const CairoColor PowderBlue{ 176 / 255.0, 224 / 255.0, 230 };
	inline static const CairoColor Purple{ 128 / 255.0, 0 / 255.0, 128 };
	inline static const CairoColor Red{ 255 / 255.0, 0 / 255.0, 0 };
	inline static const CairoColor RosyBrown{ 188 / 255.0, 143 / 255.0, 143 };
	inline static const CairoColor RoyalBlue{ 65 / 255.0, 105 / 255.0, 225 };
	inline static const CairoColor SaddleBrown{ 139 / 255.0, 69 / 255.0, 19 };
	inline static const CairoColor Salmon{ 250 / 255.0, 128 / 255.0, 114 };
	inline static const CairoColor SandyBrown{ 244 / 255.0, 164 / 255.0, 96 };
	inline static const CairoColor SeaGreen{ 46 / 255.0, 139 / 255.0, 87 };
	inline static const CairoColor SeaShell{ 255 / 255.0, 245 / 255.0, 238 };
	inline static const CairoColor Sienna{ 160 / 255.0, 82 / 255.0, 45 };
	inline static const CairoColor Silver{ 192 / 255.0, 192 / 255.0, 192 };
	inline static const CairoColor SkyBlue{ 135 / 255.0, 206 / 255.0, 235 };
	inline static const CairoColor SlateBlue{ 106 / 255.0, 90 / 255.0, 205 };
	inline static const CairoColor SlateGray{ 112 / 255.0, 128 / 255.0, 144 };
	inline static const CairoColor Snow{ 255 / 255.0, 250 / 255.0, 250 };
	inline static const CairoColor SpringGreen{ 0 / 255.0, 255 / 255.0, 127 };
	inline static const CairoColor SteelBlue{ 70 / 255.0, 130 / 255.0, 180 };
	inline static const CairoColor Tan{ 210 / 255.0, 180 / 255.0, 140 };
	inline static const CairoColor Teal{ 0 / 255.0, 128 / 255.0, 128 };
	inline static const CairoColor Thistle{ 216 / 255.0, 191 / 255.0, 216 };
	inline static const CairoColor Tomato{ 255 / 255.0, 99 / 255.0, 71 };
	inline static const CairoColor Turquoise{ 64 / 255.0, 224 / 255.0, 208 };
	inline static const CairoColor Violet{ 238 / 255.0, 130 / 255.0, 238 };
	inline static const CairoColor Wheat{ 245 / 255.0, 222 / 255.0, 179 };
	inline static const CairoColor White{ 255 / 255.0, 255 / 255.0, 255 };
	inline static const CairoColor WhiteSmoke{ 245 / 255.0, 245 / 255.0, 245 };
	inline static const CairoColor Yellow{ 255 / 255.0, 255 / 255.0, 0 };
	inline static const CairoColor YellowGreen{ 154 / 255.0, 205 / 255.0, 50 };
};
