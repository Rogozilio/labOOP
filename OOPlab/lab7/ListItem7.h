#pragma once
#include <iostream>

template <class T>
class ListItem7
{
public:
	//������� ������
	T person;
	//��������� �� ��������� ������� ������
	ListItem7* next = NULL;
};