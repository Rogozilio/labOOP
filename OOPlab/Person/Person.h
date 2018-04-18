#pragma once
#include <iostream>
#include <string>
#include "../List/List.h"
#include "Sex.h"

using namespace std;

//TODO: переименовать просто в Person
//исправлено
class Person
{
//TODO: все поля должны быть под модификатором private! Инкапсуляция
//исправлено
//TODO: Сделать сеттеры и геттеры для фамилии/имени с проверками правильности имён
protected:
	//имя персоны
	string _name;
	//фамилия персоны
	string _surname;
	//возраст персоны
	int _age;
	//пол персоны
	Sex _sex;
public:
	//данные о персоне
	// TODO: Добавить virtual, проверить, работает ли полиморфизм
	virtual string GetDescription();
	//получить возраст персоны
	int GetAge();
	//задать возраст персоне
	void SetAge(int age);
	//получить имя персоны
	string GetName();
	//задать имя персоне
	void SetName(string name);
	//получить фамилию персоны
	string GetSurname();
	//задать фамилию персоне
	void SetSurname(string surname);
	//получить пол персоны
	Sex GetSex();
	//задать пол персоне
	void SetSex(Sex sex);
};

//перегрузка оператора вывода
ostream& operator<<(ostream& os, Person person);
ostream& operator<<(ostream& os, List<double> list);


