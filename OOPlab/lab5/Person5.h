#pragma once
#include <iostream>
#include <string>
#include "..\lab3\Sex.h"

using namespace std;

//TODO: ������������� ������ � Person
class Person5
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
	string GetDescription();
	//�������� ������� �������
	int GetAge();
	//������ ������� �������
	void SetAge(int age);
};
