#include "Player.h"

#include <Novice.h>

void Player::initialize() {
}

void Player::update() {
}

void Player::draw() {
	Novice::DrawBox(int(positionX), 100, 50, 50, 0, WHITE, kFillModeSolid);
}

void Player::move_right() {
	positionX += 1.0f;
}

void Player::move_left() {
	positionX -= 1.0f;
}
