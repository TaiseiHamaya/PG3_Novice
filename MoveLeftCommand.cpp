#include "MoveLeftCommand.h"

#include "Player.h"

void MoveLeftCommand::Exec(Player& player) {
	player.move_left();
}
