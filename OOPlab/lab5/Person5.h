#pragma once
#include <iostream>
#include <string>
#include "..\lab3\Sex.h"

using namespace std;

class Person5
{
public:
	string Name;
	string Surname;
	int Age;
	Sex Sex;
	Person5 GetRandomPerson();
};
