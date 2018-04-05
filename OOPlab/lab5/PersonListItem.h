#pragma once
#include <iostream>
#include "Person5.h"

class PersonListItem
{
public:
	//элемент списка
	Person5 person;
	//указатель на следующий элемент списка
	PersonListItem* next = NULL;
};