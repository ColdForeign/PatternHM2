#pragma once
#include "ICarConsole.h"

class Driver
{
private:
	ICarConsole* car;
public:
	Driver()
	{
		this->car = new ICarConsole;
	}

	~Driver()
	{
		delete this->car;
		this->car = nullptr;
	}

	void drive()
	{
		this->car->run();
		this->car->rotate(150);
		this->car->rotate(-100);
		this->car->stop();
	}
};

