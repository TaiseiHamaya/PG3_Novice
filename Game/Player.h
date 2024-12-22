#pragma once

#include "Entity.h"

class Player : public Entity {
public:
	Player();
	~Player() = default;

public:
	void update();

	void on_collision() {};

private:
};
