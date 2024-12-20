#pragma once

class Player {
public:
	void initialize();
	void update();
	void draw();

public:
	void move_right();
	void move_left();

private:
	float positionX{ 0 };
};

