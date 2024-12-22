#include "Bullet.h"

Bullet::Bullet(const Vector2& position_) {
	position = position_;
	color = 0xe0e010ff;
}

void Bullet::update() {
	position.y -= 20;

	if (position.y <= -100) {
		isDead = true;
	}
}

void Bullet::on_collision() {
	isDead = true;
}
