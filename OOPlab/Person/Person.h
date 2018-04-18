#pragma once
#include <iostream>
#include <string>
#include "../List/List.h"
#include "Sex.h"

using namespace std;

//TODO: ������������� ������ � Person
//����������
class Person
{
//TODO: ��� ���� ������ ���� ��� ������������� private! ������������
//����������
//TODO: ������� ������� � ������� ��� �������/����� � ���������� ������������ ���
protected:
	//��� �������
	string _name;
	//������� �������
	string _surname;
	//������� �������
	int _age;
	//��� �������
	Sex _sex;
public:
	//������ � �������
	// TODO: �������� virtual, ���������, �������� �� �����������
	virtual string GetDescription();
	//�������� ������� �������
	int GetAge();
	//������ ������� �������
	void SetAge(int age);
	//�������� ��� �������
	string GetName();
	//������ ��� �������
	void SetName(string name);
	//�������� ������� �������
	string GetSurname();
	//������ ������� �������
	void SetSurname(string surname);
	//�������� ��� �������
	Sex GetSex();
	//������ ��� �������
	void SetSex(Sex sex);
};

//���������� ��������� ������
ostream& operator<<(ostream& os, Person person);
ostream& operator<<(ostream& os, List<double> list);


