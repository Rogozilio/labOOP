#pragma once
#include "..\lab5\Person5.h"

class Child : public Person5
{
public:
	//�������� �����
	string School;
	//��������� �� ������� Mother
	Person5* Mother = NULL;
	//��������� �� ������� Father
	Person5* Father = NULL;
	//������ � �������
	string GetDescription();
};