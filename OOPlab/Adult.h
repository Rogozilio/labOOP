#pragma once
#include "lab5\Person5.h"

class Adult : public Person5
{
public:
	string WorkPlace;//����� ������
	Person5* MarriedOn = NULL;//��������� �� ������� � ��� � �����
	string GetDesciption(Person5 person1);//������ � ��������
};
