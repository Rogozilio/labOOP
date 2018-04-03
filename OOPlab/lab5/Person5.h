#pragma once
#include <iostream>
#include <string>
#include "..\lab3\Sex.h"

using namespace std;

class Person5
{
public:
	string Name;//имя персоны
	string Surname;//фамилия персоны
	int Age;//возраст персоны
	Sex Sex;//пол персоны
	string GetDesciption(Person5 person);//данные о персоне
	int GetAge();//получить возраст персоны
	void SetAge(int age);//задать возраст персоне
};
