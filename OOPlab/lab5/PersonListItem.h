#pragma once
#include <iostream>
#include "Person5.h"

class PersonListItem
{
public:
	Person5 person;//элемент списка
	PersonListItem* next = NULL;// указатель на следующий элемент списка
};