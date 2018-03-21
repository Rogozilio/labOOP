#pragma once
#include "person4.h"

//структура списка
struct PersonList
{
	PersonLab4 Person;
	PersonList* Next = NULL;
	PersonList* Prev = NULL;
};