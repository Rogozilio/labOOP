#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "Person.h"
#include "PersonTools.h"

using namespace std;

//TODO: ��������� � ���� Person.cpp
//����������
string Person::GetDescription()
{
	//TODO: ������������ ���������� ����������
	//����������
	string infoPerson = { "" };
	infoPerson = Name + ' ' + Surname + ", " + to_string(Age) + " years old, ";
	if (Sex == Male)
	{
		//TODO: �������� �� +=
		//����������
		infoPerson +=  "male. ";
	}
	else
	{
		//TODO: �������� �� +=
		//����������
		infoPerson +=  "female. ";
	}
	return infoPerson;
}

//TODO: ��������� � Person.cpp
//����������
int Person::GetAge()
{
	return Age;
}

//TODO: ��������� � Person.cpp
//����������
void Person::SetAge(int age)
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