#pragma once
#include "person4.h"

//������� ������
struct PersonListItem4
{
	PersonLab4 Person;
	PersonListItem4* Next = NULL;
	PersonListItem4* Prev = NULL;
};