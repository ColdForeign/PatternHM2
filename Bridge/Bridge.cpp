#include "Bridge.h"

Calculator::Calculator()
{
	this->language = nullptr;
	this->rate = 35;
}

Calculator::Calculator(Language* language)
{
	this->language = language;
	this->rate = 35;
}

size_t Calculator::getSalary(Language* language)
{
	if (language != nullptr)
		this->language = language;

	if (this->language == nullptr)
		return 0;
	cout << "1 - Work in the company\n";
	cout << "2 - Works as a freelancer\n\n";
	cout << "Enter your choice: ";

	char choice;
	size_t quantity;
	size_t salary;


	cin >> choice;

	switch (choice)
	{
	case '1':
		cout << "Enter quantity of hours: ";
		cin >> quantity;
		salary = quantity * this->language->getSalaryPerHour();
		salary = (salary / 100) * (100 - this->rate);
		break;
	case '2':
		cout << "Enter quantity of lines: ";
		cin >> quantity;
		salary = quantity * this->language->getSalaryPerLine();
		break;
	default:
		return 0;
		break;
	}

	return salary;
}

void Calculator::Menu()
{
	cout << "1 - C#\n";
	cout << "2 - C++\n";
	cout << "3 - JavaScript\n";
	cout << "4 - Python\n\n";
	cout << "Enter your choice: ";

	char choice;
	cin >> choice;

	Language* language = nullptr;

	switch (choice)
	{
	case '1':
		language = new CSharp;
		break;
	case '2':
		language = new CPlusPlus;
		break;
	case '3':
		language = new JavaScript;
		break;
	case '4':
		language = new Python;
		break;
	default:
		return;
		break;
	}

	Calculator calculator(language);
	cout << "Salary: " << calculator.getSalary() << endl;
}

Calculator::~Calculator()
{
	delete this->language;
}
