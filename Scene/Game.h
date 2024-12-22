#pragma once

#include <memory>
#include <list>

#include "IScene.h"

#include "Game/Player.h"
#include "Game/Enemy.h"
#include "Game/Bullet.h"

class Game : public IScene {
public:
	void initialize() override;
	void update() override;
	void draw() const override;

private:
	std::unique_ptr<Player> player;
	std::unique_ptr<Enemy> enemy;

	std::list<Bullet> playerBullets;
	float shotCoolTime;
};

