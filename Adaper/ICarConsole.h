#pragma once
#include "Car.h"
#include "iCar.h"
class ICarConsole : public ICar
{
private:
	Car car;
public:
	void run() override
	{
		this->car.start();
	}
	void stop() override
	{
		this->car.stop();
	}
	void rotate(int angle) override
	{
		if (angle > 0)
			this->car.right(angle);
		else
			this->car.left(angle);
	}
};

