#include "Enemy.h"

Enemy::Enemy() {
	position = { 640,100 };
	color = 0xff1010FF;
}

void Enemy::on_collision() {
	isDead = true;
}
