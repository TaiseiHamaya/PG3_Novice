#include "MoveRightCommand.h"

#include "Player.h"

void MoveRightCommand::Exec(Player& player) {
	player.move_right();
}
