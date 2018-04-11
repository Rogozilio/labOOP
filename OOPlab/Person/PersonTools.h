#pragma once
#include "Person.h"
#include "Sex.h"
#include "Adult.h"
#include "Child.h"

//TODO: ��������� ���� ����� �� ������ ���� ���������.
//TODO: ������� ����������� �����, ����� ��� ������ ����� ������ � ��� ���� ���� � �� �� ����������.
//����� �� ��� ������ ����� ������ ������ ����������. �������� �������� ����� �� ��������.
//���� ���������� �� 3 ��������� ������� - GetRandomPerson, GetRandomAdult, GetRandomChild
//TODO: ������ PersonTools ����������� �� Person? ��������� ��������� ��� ��� ������������� ��������? (���� ��� ������ ���� ������...)
//����������
class PersonTools
{
public:
	//��������� �� ��������� �������
	static Person* GetRandomPerson(Sex sex);
	//��������� �� ��������� �������� �������
	static Adult* GetRandomAdult(Sex sex);
	//��������� �� ���������� �������
	static Child* GetRandomChild(Sex sex);
};
