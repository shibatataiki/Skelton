#pragma once

//�QD�x�N�g��
struct Vector2 {
	float x, y;
};

//���W���x�N�g���Ȃ̂ŁA���W�Ƃ��Ē�`����
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