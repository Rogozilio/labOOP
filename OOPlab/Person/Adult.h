#pragma once
#include "Person.h"

class Adult : public Person
{
public:
	//����� ������
	string WorkPlace;
	//��������� �� ������� � ��� � �����
	Person* MarriedOn = NULL;
	//������ � ��������
	string GetDescription();
	Adult();
};
