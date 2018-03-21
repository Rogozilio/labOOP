#pragma once
#include <iostream>
#include <string>

using namespace std;

//TODO: Комментарий к функции
int CheckSymbol()
{
	string string;
	int integer;
	do
	{
		cout << "Введите номер функции для ее выполнения ";
		cin >> string;
		if (string == "0") { return 0; }
		integer = atoi(string.c_str());
	} while (integer == 0);
	return integer;
}