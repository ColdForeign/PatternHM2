#pragma once
#include <iostream>
using std::string;

class Car
{
public: 
	Car()
	{
		this->name = "";
		this->speed = 0;
		this->angle = 0;

	}
	Car(string name) : Car()
	{
		this->name = name;

	}
	void start()
	{
		this->speed = 100;
	}
	void stop()
	{
		this->speed = 0;
	}
	void right(int angle)
	{
		this->angle += angle;
	}
	void left(int angle)
	{
		this->angle += angle;
	}
	
private:
	int angle;
	std::string name;
	size_t speed;

};

