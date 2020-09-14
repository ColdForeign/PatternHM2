#pragma once
#include "Bank.h"
using std::cin;

class ATM
{
public:
	ATM();
	ATM(Bank* bank);
	bool authorization();

	bool authorization(size_t accNumber, string password);

	bool addMoney(size_t amount);
	bool takeMoney(size_t amount);
	bool showInfo();
	void exit();
	~ATM();
private:
	bool checkBank() const;
	Bank* bank;
	Client* currentClient;

	const size_t passLenght = 8;
};

inline void CinRepeir()
{

	if (char(cin.peek()) == '\n')
		cin.ignore();

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
}