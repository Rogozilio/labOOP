#pragma once
#include <iostream>

template <class T>
//TODO: ������������� ��� 7
//����������
class ListItem
{
public:
	//������� ������
	//TODO: �������������. ������ ������ ����� ������� �� ������ ������, �� � ����� ������ ������
	//TODO: ������������� �� RSDN
	//����������
	T value;
	//��������� �� ��������� ������� ������
	//TODO: ������������� �� RSDN
	//����������
	ListItem<T>* nextValue = NULL;
};