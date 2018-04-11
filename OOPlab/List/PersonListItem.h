#pragma once
#include <iostream>
#include "../Person/Person.h"

class PersonListItem
{
public:
	//элемент списка
	Person person;
	//указатель на следующий элемент списка
	PersonListItem* next = NULL;
};