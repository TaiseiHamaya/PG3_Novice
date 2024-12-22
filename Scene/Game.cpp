#include "Game.h"

#include <Novice.h>

#include "SceneManager.h"

void Game::initialize() {
	player = std::make_unique<Player>();
	enemy = std::make_unique<Enemy>();

	shotCoolTime = 1.0f;
}

void Game::update() {
	shotCoolTime -= 1 / 60.0f;

	player->update();
	enemy->update();
	for (auto& bullet : playerBullets) {
		bullet.update();
	}

	if (Novice::CheckHitKey(DIK_SPACE) && shotCoolTime <= 0) {
		shotCoolTime = 0.5f;
		playerBullets.emplace_back(player->get_position());
	}

	for (auto& bullet : playerBullets) {
		Vector2 direction = bullet.get_position() - enemy->get_position();
		float distance = direction.length();
		if (distance < bullet.get_radius() + enemy->get_radius()) {
			enemy->on_collision();
			bullet.on_collision();
			break;
		}
	}

	if (enemy->is_dead()) {
		SceneManager::GetInstance().set_scene(SceneName::Result);
	}
}

void Game::draw() const {
	player->draw();
	enemy->draw();
	for (const auto& bullet : playerBullets) {
		bullet.draw();
	}
	Novice::ScreenPrintf(0, 0, "Game");
}
