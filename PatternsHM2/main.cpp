#include "ATM.h"

int main()
{
	Bank* bank = new Bank();
	bank->addClient(new Client("Sanya", 88884444, "sanya111", 10000));
	bank->addClient(new Client("Max", 22221111, "max12453"));
	bank->addClient(new Client("Sanya", 88884444, "sanya1112"));

	ATM atm(bank);
	atm.authorization(88884444, "sanya111");
	cout << endl;

	atm.showInfo();

	cout << endl;
	atm.takeMoney(57584);
	atm.showInfo();

	cout << endl;
	atm.exit();
	atm.showInfo();
	cout << endl;

	atm.authorization();
	atm.addMoney(57584);
	cout << endl;
	atm.showInfo();
	return 0;
}