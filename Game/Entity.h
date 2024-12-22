#pragma once

#include "MathLib/Vector2.h"

#include <cstdint>

class Entity {
public:
	Entity() = default;
	~Entity() = default;

public:
	virtual void update() = 0;
	virtual void draw() const;

	virtual void on_collision() = 0;

public:
	bool is_dead() const { return isDead; };
	const Vector2& get_position() const { return position; };
	float get_radius() const { return radius; };

protected:
	Vector2 position;
	float radius{ 25 };
	uint32_t color;
	bool isDead{ false };
};
