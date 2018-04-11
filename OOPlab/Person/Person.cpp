#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "Person.h"
#include "PersonTools.h"

using namespace std;

//TODO: перенести в файл Person.cpp
//исправлено
string Person::GetDescription()
{
	//TODO: неправильное именование переменной
	//исправлено
	string infoPerson = { "" };
	infoPerson = Name + ' ' + Surname + ", " + to_string(Age) + " years old, ";
	if (Sex == Male)
	{
		//TODO: заменить на +=
		//исправлено
		infoPerson +=  "male. ";
	}
	else
	{
		//TODO: заменить на +=
		//исправлено
		infoPerson +=  "female. ";
	}
	return infoPerson;
}

//TODO: перенести в Person.cpp
//исправлено
int Person::GetAge()
{
	return Age;
}

//TODO: перенести в Person.cpp
//исправлено
void Person::SetAge(int age)
{
	if (age > 0)
	{
		Age = age;
	}
	else
	{
		//TODO: если кто-то пытается присвоить отрицательное значение,
		// значит у него в коде ошибка. Надо выбрасывать исключение,
		// чтобы другому разработчику было проще найти ошибку в своём коде
		Age = 1;
	}
}