#pragma once
#include "Person.h"

class Child : public Person
{
public:
	//�������� �����
	string School;
	//��������� �� ������� Mother
	Person* Mother = NULL;
	//��������� �� ������� Father
	Person* Father = NULL;
	//������ � �������
	string GetDescription();
	Child();
};