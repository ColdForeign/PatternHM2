#pragma once
class ICar 
{
public:
	virtual void run() = 0;
	virtual void rotate(int angle) = 0;
	virtual void stop() = 0;
};

