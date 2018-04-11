#pragma once
#include <iostream>
#include <string>
#include "..\lab3\Sex.h"

using namespace std;

//TODO: переименовать просто в Person
class Person5
{
//TODO: все поля должны быть под модификатором private! Инкапсуляция
//TODO: Сделать сеттеры и геттеры для фамилии/имени с проверками правильности имён
public:
	//имя персоны
	string Name;
	//фамилия персоны
	string Surname;
	//возраст персоны
	int Age;
	//пол персоны
	Sex Sex;
	//данные о персоне
	// TODO: Добавить virtual, проверить, работает ли полиморфизм
	string GetDescription();
	//получить возраст персоны
	int GetAge();
	//задать возраст персоне
	void SetAge(int age);
};
