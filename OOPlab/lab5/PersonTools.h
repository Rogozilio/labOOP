#pragma once
#include "Person5.h"
#include "PersonList.h"

//TODO: ��������� ���� ����� �� ������ ���� ���������.
//TODO: ������� ����������� �����, ����� ��� ������ ����� ������ � ��� ���� ���� � �� �� ����������.
//����� �� ��� ������ ����� ������ ������ ����������. �������� �������� ����� �� ��������.
//���� ���������� �� 3 ��������� ������� - GetRandomPerson, GetRandomAdult, GetRandomChild
//TODO: ������ PersonTools ����������� �� Person5? ��������� ��������� ��� ��� ������������� ��������? (���� ��� ������ ���� ������...)
template <typename T>
class PersonTools : public Person5
{
public:
	//��������� �� ��������� �������
	static T* GetRandomPerson(bool sex, bool isChild);
};
