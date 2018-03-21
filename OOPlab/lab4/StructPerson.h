#pragma once
#include "person4.h"
//TODO: файл должен именоваться также, как и структура

//TODO: Неправильная реализация! 
// PersonList должен содержать только указатель на голову/хвост списка,
// а данные должны храниться в промежуточной структуре PersonListItem

//структура списка
struct PersonList
{
	PersonLab4 Person;
	PersonList* Next = NULL;
	PersonList* Prev = NULL;
};