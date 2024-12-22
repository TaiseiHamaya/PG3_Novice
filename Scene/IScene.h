#pragma once

class IScene {
public:
	virtual ~IScene() = default;

public:
	virtual void initialize() {};
	virtual void update() = 0;
	virtual void draw() const = 0;
};
