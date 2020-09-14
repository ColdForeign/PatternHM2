#include "hash.h"

Hash::Hash()
{
	this->hashCode = this->hashNew("");
}

Hash::Hash(string value)
{
	this->hashCode = this->hashNew(value);
}

void Hash::setHash(string value)
{
	this->hashCode = this->hashNew(value);
}

bool Hash::isNull() const
{
	return (this->hashCode == 0);
}

size_t Hash::getHash() const
{
	return this->hashCode;
}

bool Hash::operator!=(const Hash& hash)
{
	return (this->hashCode != hash.hashCode);
}

bool Hash::operator==(const Hash& hash)
{
	return (this->hashCode == hash.hashCode);
}

bool Hash::operator==(const string& value)
{
	return (this->hashCode == this->hashNew(value));
}

bool Hash::operator==(const size_t& hashCode)
{
	return (this->hashCode == hashCode);
}

void Hash::operator=(const Hash& hash)
{
	this->hashCode = hash.hashCode;
}

void Hash::operator=(const size_t& hashCode)
{
	this->hashCode = hashCode;
}

ostream& operator<<(ostream& output, const Hash& hash)
{
	output << hash.getHash();
	return output;
}

Hash::~Hash()
{
	this->hashCode = 0;
}

