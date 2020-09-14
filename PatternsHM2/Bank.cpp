#include "Bank.h"

bool Bank::addClient(Client* client)
{
	if (client != nullptr)
		if (!client->isNull())
		{
			this->clients.push_back(client);
			cout << "Client added to bank\n";
			return true;
		}

	cout << "Client creation error\n";
	return false;
}

bool Bank::removeClient(size_t accNumber)
{
	for (size_t i = 0; i < this->clients.size(); i++)
		if (*this->clients[i] == accNumber)
		{
			this->clients.erase(this->clients.begin() + i);
			cout << "Client removed from bank\n";
			return true;
		}
	cout << "Client remeve error\n";
	return false;
}

Client* Bank::getClient(size_t accNumber, string password)
{
	for (Client* client : this->clients)
		if (*client == accNumber)
			if (client->checkPassword(password))
				return client;
	return nullptr;
}

Client* Bank::loginClient(size_t accNumber, string password)
{
	for (Client* client : this->clients)
		if (*client == accNumber)
			if (client->login(password))
				return client;
	return nullptr;
}

bool Bank::findClient(size_t accNumber)
{
	for (Client* client : this->clients)
		if (*client == accNumber)
			return true;
	return false;
}

bool Bank::findClient(Client client)
{
	return findClient(client.getAccNumber());
}

bool Bank::isEmpty()
{
	return this->clients.empty();
}

Bank::~Bank()
{
	this->clients.clear();
}
