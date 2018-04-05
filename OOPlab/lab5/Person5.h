#pragma once
#include <iostream>
#include <string>
#include "..\lab3\Sex.h"

using namespace std;

class Person5
{
public:
	//имя персоны
	string Name;
	//фамилия персоны
	string Surname;
	//возраст персоны
	int Age;
	//пол персоны
	Sex Sex;
	//данные о персоне
	string GetDescription();
	//получить возраст персоны
	int GetAge();
	//задать возраст персоне
	void SetAge(int age);
};
