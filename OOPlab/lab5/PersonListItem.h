#pragma once
#include <iostream>
#include "Person5.h"

class PersonListItem
{
public:
	Person5 person;
	PersonListItem* next = NULL;
};