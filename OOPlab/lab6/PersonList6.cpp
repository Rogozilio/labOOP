#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "../lab5/Person5.h"
#include "../lab5/PersonTools.h"
#include "../lab5/PersonTools.cpp"

using namespace std;

string Person5::GetDescription()
{
	string person = { "" };
	person = Name + ' ' + Surname + ", " + to_string(Age) + " years old, ";
	if (Sex == Male)
	{
		person = person + "male. ";
	}
	else
	{
		person = person + "female. ";
	}
	return person;
}

string Adult::GetDescription()
{
	string person = Person5::GetDescription();
	string workPlace[] = { "Lawyer","Actor","Animator", "Barman", "Banker",
		"Businessman", "Broker", "Web designer", "Driver","Developer",
		"Cashier", "Composer", "Pilot", "Interpreter", "Programmer" };

	MarriedOn = PersonTools<Person5>::GetRandomPerson(rand() % 2, 0);
	WorkPlace = workPlace[rand() % 15];

	if (MarriedOn != NULL)
	{
		person = person + "married on " + MarriedOn->Name + ' ' + MarriedOn->Surname + ", " + WorkPlace;
	}
	else
	{
		person = person + "single, " + WorkPlace;
	}

	return person;
}

string Child ::GetDescription()
{
	string person = Person5::GetDescription();

	Mother = PersonTools<Person5>::GetRandomPerson(0, 0);
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

int Person5::GetAge()
{
	return Age;
}

void Person5::SetAge(int age)
{
	if (age > 0)
	{
		Age = age;
	}
	else
	{
		Age = 1;
	}
}