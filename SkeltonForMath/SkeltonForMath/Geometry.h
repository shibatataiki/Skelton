#pragma once

//２Dベクトル
struct Vector2 {
	float x, y;
};

//座標＝ベクトルなので、座標として定義する
using Position2 = Vector2;

struct Rect {
	Position2 center;
	float w;
	float h;

	float Left()const;

	float Top()const;

	float Right()const;
	float Bottom()const;

	
};