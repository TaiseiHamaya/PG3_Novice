#include "InputHandler.h"

#include "MoveRightCommand.h"
#include "MoveLeftCommand.h"

#include <Novice.h>

ICommand<Player>* InputHandler::handle_input() {
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD.get();
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA.get();
	}
	return nullptr;
}

void InputHandler::assign_move_right_command() {
	pressKeyD = std::make_unique<MoveRightCommand>();
}

void InputHandler::assign_move_left_command() {
	pressKeyA = std::make_unique<MoveLeftCommand>();
}
