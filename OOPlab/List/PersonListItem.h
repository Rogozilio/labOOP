#pragma once
#include <iostream>
#include "../Person/Person.h"

class PersonListItem
{
public:
	//������� ������
	Person person;
	//��������� �� ��������� ������� ������
	PersonListItem* next = NULL;
};