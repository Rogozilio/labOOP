#pragma once
#include <iostream>
#include <string>
#include "Sex.h"

using namespace std;

//TODO: ������������� ������ � Person
//����������
class Person
{
//TODO: ��� ���� ������ ���� ��� ������������� private! ������������
//TODO: ������� ������� � ������� ��� �������/����� � ���������� ������������ ���
public:
	//��� �������
	string Name;
	//������� �������
	string Surname;
	//������� �������
	int Age;
	//��� �������
	Sex Sex;
	//������ � �������
	// TODO: �������� virtual, ���������, �������� �� �����������
	virtual string GetDescription();
	//�������� ������� �������
	int GetAge();
	//������ ������� �������
	void SetAge(int age);
};
