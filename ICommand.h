#pragma once

template<typename T>
class ICommand {
public:
	virtual ~ICommand() = default;

	virtual void Exec(T&) = 0;
};

