#pragma once
#include "..\lab5\Person5.h"

class Child : public Person5
{
public:
	string School;//�������� �����
	Person5* Mother = NULL;//��������� �� ������� Mother
	Person5* Father = NULL;//��������� �� ������� Father
	string GetDesciption(Person5 person1);//������ � �������
};