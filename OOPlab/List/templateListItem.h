#pragma once
#include <iostream>

template <class T>
//TODO: ������������� ��� 7
//����������
class TemplateListItem
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
	TemplateListItem* nextValue = NULL;
};