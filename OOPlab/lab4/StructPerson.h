#pragma once
#include "person4.h"
//TODO: ���� ������ ����������� �����, ��� � ���������

//TODO: ������������ ����������! 
// PersonList ������ ��������� ������ ��������� �� ������/����� ������,
// � ������ ������ ��������� � ������������� ��������� PersonListItem

//��������� ������
struct PersonList
{
	PersonLab4 Person;
	PersonList* Next = NULL;
	PersonList* Prev = NULL;
};