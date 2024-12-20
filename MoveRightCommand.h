#pragma once

#include "ICommand.h"

class Player;

class MoveRightCommand : public ICommand<Player> {
public:
	void Exec(Player& player) override;
};

