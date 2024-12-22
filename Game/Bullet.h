#pragma once

#include "Entity.h"

class Bullet : public Entity {
public:
	Bullet(const Vector2& position);
	~Bullet() = default;

public:
	void update();

	void on_collision();
};

