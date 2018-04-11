#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "../lab5/Person5.h"
#include "../lab5/PersonTools.h"
#include "../lab5/PersonTools.cpp"

using namespace std;

//TODO: ��������� � ���� Person5.cpp
string Person5::GetDescription()
{
	//TODO: ������������ ���������� ����������
	string person = { "" };
	person = Name + ' ' + Surname + ", " + to_string(Age) + " years old, ";
	if (Sex == Male)
	{
		//TODO: �������� �� +=
		person = person + "male. ";
	}
	else
	{
		//TODO: �������� �� +=
		person = person + "female. ";
	}
	return person;
}

//TODO: ��������� � ���� Adult.cpp
string Adult::GetDescription()
{
	//TODO: ������������ ���������� ����������
	string person = Person5::GetDescription();
	//TODO: ������ ����� ������ ������������ ������ ��� ��� ������ ������ GetDescription()?
	//TODO: �������� � Adult ���� WorkPlace, ������� GetDescription �� ������ ������ ������������.
	string workPlace[] = { "Lawyer","Actor","Animator", "Barman", "Banker",
		"Businessman", "Broker", "Web designer", "Driver","Developer",
		"Cashier", "Composer", "Pilot", "Interpreter", "Programmer" };

	//TODO: ������� �� ������ ������ ������������!
	MarriedOn = PersonTools<Person5>::GetRandomPerson(rand() % 2, 0);
	WorkPlace = workPlace[rand() % 15];

	if (MarriedOn != NULL)
	{
		//TODO: �������� �� +=
		person = person + "married on " + MarriedOn->Name + ' ' + MarriedOn->Surname + ", " + WorkPlace;
	}
	else
	{
		//TODO: �������� �� +=
		person = person + "single, " + WorkPlace;
	}

	return person;
}

//TODO: ��������� � Child.cpp
string Child ::GetDescription()
{
	//TODO: �������������
	string person = Person5::GetDescription();
	//TODO: ������� ��������� ������
	Mother = PersonTools<Person5>::GetRandomPerson(0, 0);
	//TODO: ������� ��������� ������
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

//TODO: ��������� � Person.cpp
int Person5::GetAge()
{
	return Age;
}

//TODO: ��������� � Person.cpp
void Person5::SetAge(int age)
{
	if (age > 0)
	{
		Age = age;
	}
	else
	{
		//TODO: ���� ���-�� �������� ��������� ������������� ��������,
		// ������ � ���� � ���� ������. ���� ����������� ����������,
		// ����� ������� ������������ ���� ����� ����� ������ � ���� ����
		Age = 1;
	}
}