#pragma once

#include "Entity.h"

class Enemy : public Entity {
public:
	Enemy();
	~Enemy() = default;

public:
	void update() {};

	void on_collision();

private:
};
