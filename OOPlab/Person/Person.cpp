#include <iostream>
#include <string>
#include <ctime>
#include "../List/List.h"
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
	infoPerson = _name + ' ' + _surname + ", " + to_string(_age) + " years old, ";
	if (_sex == Male)
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
	return _age;
}

//TODO: перенести в Person.cpp
//исправлено
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
			//TODO: если кто-то пытается присвоить отрицательное значение,
			// значит у него в коде ошибка. Надо выбрасывать исключение,
			// чтобы другому разработчику было проще найти ошибку в своём коде
			//исправлено
			throw "Возраст не может быть меньше 1";
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
	os << endl << "Фамилия: " << person.GetSurname()
		<< " | Имя: " << person.GetName()
		<< " | Возраст: " << person.GetAge()
		<< " | Пол: " << person.GetSex() << endl;
	return os;
}

ostream& operator<<(ostream& os, List<double> list)
{
	list.Show();
	return os;
}
