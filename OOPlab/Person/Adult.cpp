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
	//TODO: ������ ����� ������ ������������ ������ ��� ��� ������ ������ GetDescription()?
	//TODO: �������� � Adult ���� WorkPlace, ������� GetDescription �� ������ ������ ������������.
	//����������
	string workPlace[] = { "Lawyer","Actor","Animator", "Barman", "Banker",
		"Businessman", "Broker", "Web designer", "Driver","Developer",
		"Cashier", "Composer", "Pilot", "Interpreter", "Programmer" };
	WorkPlace = workPlace[rand() % 15];
	//TODO: ������� �� ������ ������ ������������!
	//����������
	MarriedOn = PersonTools::GetRandomPerson(Female);
}
//TODO: ��������� � ���� Adult.cpp
//����������
string Adult::GetDescription()
{
	//TODO: ������������ ���������� ����������
	//����������
	string infoPerson = Person::GetDescription();
	if (MarriedOn != NULL)
	{
		//TODO: �������� �� +=
		//����������
		infoPerson += "married on " + MarriedOn->GetName() + ' ' + MarriedOn->GetSurname() + ", " + WorkPlace;
	}
	else
	{
		//TODO: �������� �� +=
		//����������
		infoPerson += "single, " + WorkPlace;
	}

	return infoPerson;
}