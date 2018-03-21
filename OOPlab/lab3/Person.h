#pragma once
#include "Sex.h"
//TODO: много лишних слов в описании структуры. Оставить просто "Человек"
//Структура данных хранит информацию о человеке
struct Person
{
	char Surname[40];
	char Name[20];
	int Age;
	Sex Sex;
};