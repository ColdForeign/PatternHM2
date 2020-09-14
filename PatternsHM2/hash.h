#pragma once
#include <iostream>
using std::hash;
using std::ostream;
using std::string;

class Hash
{
public:
	Hash();
	Hash(string value);

	size_t getHash() const;
	void setHash(string value);
	bool isNull() const;

	bool operator != (const Hash& hash);
	bool operator == (const Hash& hash);
	bool operator == (const string& value);
	bool operator == (const size_t& hashCode);
	void operator = (const Hash& hash);
	void operator=(const size_t& hashCode);

	~Hash();

private:
	friend ostream& operator << (ostream& output, const Hash& hash);
	size_t hashCode;
	hash<string> hashNew;
};
