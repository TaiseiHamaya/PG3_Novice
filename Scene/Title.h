#pragma once

#include "IScene.h"

class Title : public IScene {
public:
	void initialize() override;
	void update() override;
	void draw() const override;

private:
	float inputCoolTime{ 1.0f };
};

