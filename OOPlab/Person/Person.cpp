#include <iostream>
#include <string>
#include <ctime>
#include "../List/List.h"
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
	infoPerson = _name + ' ' + _surname + ", " + to_string(_age) + " years old, ";
	if (_sex == Male)
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
	return _age;
}

//TODO: ��������� � Person.cpp
//����������
void Person::SetAge(int age)
{
	try
	{
		if (age > 0)
		{
			_age = age;
		}
		else
		{
			//TODO: ���� ���-�� �������� ��������� ������������� ��������,
			// ������ � ���� � ���� ������. ���� ����������� ����������,
			// ����� ������� ������������ ���� ����� ����� ������ � ���� ����
			//����������
			throw "������� �� ����� ���� ������ 1";
		}
	}
	catch(...)
	{
		cout << "Error" << endl;
	}
}

string Person::GetName()
{
	return _name;
}

void Person::SetName(string name)
{
	int index = 0;
	_name = name;
}

string Person::GetSurname()
{
	return _surname;
}

void Person::SetSurname(string surname)
{
	int index = 0;
	_surname = surname;
}

Sex Person::GetSex()
{
	return _sex;
}

void Person::SetSex(Sex sex)
{
	_sex = sex;
}

ostream& operator<<(ostream& os, Person person)
{
	os << endl << "�������: " << person.GetSurname()
		<< " | ���: " << person.GetName()
		<< " | �������: " << person.GetAge()
		<< " | ���: " << person.GetSex() << endl;
	return os;
}

ostream& operator<<(ostream& os, List<double> list)
{
	list.Show();
	return os;
}
