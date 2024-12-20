#pragma once

#include <memory>

#include "ICommand.h"

class Player;

class InputHandler {
public:
	ICommand<Player>* handle_input();

	void assign_move_right_command();
	void assign_move_left_command();

private:
	std::unique_ptr<ICommand<Player>> pressKeyD;
	std::unique_ptr<ICommand<Player>> pressKeyA;
};
