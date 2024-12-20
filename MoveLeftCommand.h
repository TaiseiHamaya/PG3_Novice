#pragma once

#include "ICommand.h"

class Player;

class MoveLeftCommand : public ICommand<Player> {
public:
	void Exec(Player& player) override;
};
