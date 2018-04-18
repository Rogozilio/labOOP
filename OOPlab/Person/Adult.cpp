#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "Person.h"
#include "PersonTools.h"

using namespace std;

Adult::Adult()
{
	//TODO: Почему место работы генерируется КАЖДЫЙ раз при вызове метода GetDescription()?
	//TODO: Добавить в Adult поле WorkPlace, функция GetDescription не должна ничего генерировать.
	//исправлено
	string workPlace[] = { "Lawyer","Actor","Animator", "Barman", "Banker",
		"Businessman", "Broker", "Web designer", "Driver","Developer",
		"Cashier", "Composer", "Pilot", "Interpreter", "Programmer" };
	WorkPlace = workPlace[rand() % 15];
	//TODO: Функция не должна ничего генерировать!
	//исправлено
	MarriedOn = PersonTools::GetRandomPerson(Female);
}
//TODO: перенести в файл Adult.cpp
//исправлено
string Adult::GetDescription()
{
	//TODO: неправильное именование переменной
	//исправлено
	string infoPerson = Person::GetDescription();
	if (MarriedOn != NULL)
	{
		//TODO: заменить на +=
		//исправлено
		infoPerson += "married on " + MarriedOn->GetName() + ' ' + MarriedOn->GetSurname() + ", " + WorkPlace;
	}
	else
	{
		//TODO: заменить на +=
		//исправлено
		infoPerson += "single, " + WorkPlace;
	}

	return infoPerson;
}