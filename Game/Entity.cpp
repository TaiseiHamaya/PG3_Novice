#include "Entity.h"

#include <Novice.h>

void Entity::draw() const {
	Novice::DrawEllipse(static_cast<int>(position.x), static_cast<int>(position.y),
		static_cast<int>(radius), static_cast<int>(radius)
		, 0, color, kFillModeSolid);
}
