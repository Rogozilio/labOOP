#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "lab5/Person5.h"
#include "lab5\PersonTools.h"

using namespace std;

string Person5::GetDesciption(Person5 person1)
{
	string person = { "" };
	person = person1.Name + ' ' + person1.Surname + ", " + to_string(person1.Age);
	if (person1.Sex == Male)
	{
		person = person + " years old, male. ";
	}
	else
	{
		person = person + " years old, female. ";
	}
	return person;
}

string Adult::GetDesciption(Person5 persona)
{
	string person = Person5::GetDesciption(persona);
	string workPlace[] = { "Lawyer","Actor","Animator", "Barman", "Banker",
		"Businessman", "Broker", "Web designer", "Driver","Developer",
		"Cashier", "Composer", "Pilot", "Interpreter", "Programmer" };

	Adult person1;
	person1.Name = persona.Name;
	person1.Surname = persona.Surname;
	person1.Sex = persona.Sex;
	person1.Age = persona.Age;
	person1.MarriedOn = PersonTools::GetRandomPerson(rand() % 3, 0);
	person1.WorkPlace = workPlace[rand() % 15];

	if (person1.MarriedOn != NULL)
	{
		person = person + "married on " + person1.MarriedOn->Name + ' ' + person1.MarriedOn->Surname + ", " + person1.WorkPlace;
	}
	else
	{
		person = person + "single, " + person1.WorkPlace;
	}

	return person;
}

string Child ::GetDesciption(Person5 persona)
{
	string person = Person5::GetDesciption(persona);

	Child person1;
	person1.Name = persona.Name;
	person1.Surname = persona.Surname;
	person1.Sex = persona.Sex;
	person1.Age = persona.Age;
	person1.Mother = PersonTools::GetRandomPerson(0, 0);
	person1.Father = PersonTools::GetRandomPerson(1 + rand() % 2, 0);

	if (person1.Father != NULL && person1.Mother != NULL)
	{
		person = person + "parents are " + person1.Mother->Name + ' ' + person1.Mother->Surname + " and " + person1.Father->Name + ' ' + person1.Father->Surname;
	}
	else if (person1.Father != NULL)
	{
		person = person + "father is " + person1.Father->Name + ' ' + person1.Father->Surname;
	}
	else if(person1.Mother != NULL)
	{
		person = person + "mother is " + person1.Mother->Name + ' ' + person1.Mother->Surname;
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