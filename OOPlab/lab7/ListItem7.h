#pragma once
#include <iostream>

template <class T>
//TODO: ������������� ��� 7
class ListItem7
{
public:
	//������� ������
	//TODO: �������������. ������ ������ ����� ������� �� ������ ������, �� � ����� ������ ������
	//TODO: ������������� �� RSDN
	T person;
	//��������� �� ��������� ������� ������
	//TODO: ������������� �� RSDN
	ListItem7* next = NULL;
};