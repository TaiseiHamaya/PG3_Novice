#include "Player.h"

#include <Novice.h>

Player::Player() {
	position = { 640,500 };
	color = WHITE;
}

void Player::update() {
	Vector2 input{};
	if (Novice::CheckHitKey(DIK_A)) {
		input.x -= 1;
	}
	if (Novice::CheckHitKey(DIK_D)) {
		input.x += 1;
	}
	if (Novice::CheckHitKey(DIK_W)) {
		input.y -= 1;
	}
	if (Novice::CheckHitKey(DIK_S)) {
		input.y += 1;
	}
	Vector2 direction = input.normalize_safe(1e-4f, CVector2::ZERO);

	float SPEED = 400.0f;
	Vector2 velocity = direction * SPEED;
	position += velocity * (1.0f / 60.0f);
}
