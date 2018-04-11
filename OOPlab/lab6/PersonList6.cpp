#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "../lab5/Person5.h"
#include "../lab5/PersonTools.h"
#include "../lab5/PersonTools.cpp"

using namespace std;

//TODO: перенести в файл Person5.cpp
string Person5::GetDescription()
{
	//TODO: неправильное именование переменной
	string person = { "" };
	person = Name + ' ' + Surname + ", " + to_string(Age) + " years old, ";
	if (Sex == Male)
	{
		//TODO: заменить на +=
		person = person + "male. ";
	}
	else
	{
		//TODO: заменить на +=
		person = person + "female. ";
	}
	return person;
}

//TODO: перенести в файл Adult.cpp
string Adult::GetDescription()
{
	//TODO: неправильное именование переменной
	string person = Person5::GetDescription();
	//TODO: Почему место работы генерируется КАЖДЫЙ раз при вызове метода GetDescription()?
	//TODO: Добавить в Adult поле WorkPlace, функция GetDescription не должна ничего генерировать.
	string workPlace[] = { "Lawyer","Actor","Animator", "Barman", "Banker",
		"Businessman", "Broker", "Web designer", "Driver","Developer",
		"Cashier", "Composer", "Pilot", "Interpreter", "Programmer" };

	//TODO: Функция не должна ничего генерировать!
	MarriedOn = PersonTools<Person5>::GetRandomPerson(rand() % 2, 0);
	WorkPlace = workPlace[rand() % 15];

	if (MarriedOn != NULL)
	{
		//TODO: заменить на +=
		person = person + "married on " + MarriedOn->Name + ' ' + MarriedOn->Surname + ", " + WorkPlace;
	}
	else
	{
		//TODO: заменить на +=
		person = person + "single, " + WorkPlace;
	}

	return person;
}

//TODO: перенести в Child.cpp
string Child ::GetDescription()
{
	//TODO: переименовать
	string person = Person5::GetDescription();
	//TODO: никакой генерации данных
	Mother = PersonTools<Person5>::GetRandomPerson(0, 0);
	//TODO: никакой генерации данных
	Father = PersonTools<Person5>::GetRandomPerson(1 + rand() % 2, 0);

	if (Father != NULL && Mother != NULL)
	{
		person = person + "parents are " + Mother->Name + ' ' + Mother->Surname + " and " + Father->Name + ' ' + Father->Surname;
	}
	else if (Father != NULL)
	{
		person = person + "father is " + Father->Name + ' ' + Father->Surname;
	}
	else if(Mother != NULL)
	{
		person = person + "mother is " + Mother->Name + ' ' + Mother->Surname;
	}
	else
	{
		person = person + "parents are not specified.";
	}

	return person;
}

//TODO: перенести в Person.cpp
int Person5::GetAge()
{
	return Age;
}

//TODO: перенести в Person.cpp
void Person5::SetAge(int age)
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