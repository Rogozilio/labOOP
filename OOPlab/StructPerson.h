#pragma once
#include "person4.h"

struct PersonList
{
	PersonLab4 Person;
	PersonList* Next = NULL;
	PersonList* Prev = NULL;
};