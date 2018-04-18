#pragma once
//TODO: ������������� ���� � ��������� ����� ��� ����� ������������ ������
//����������
#include "ListItem.h"

template <class T>
//TODO: ������������� ��� 7
//����������
class List
{
private:
	//��������� �� ������ ������
	ListItem<T>* _head = NULL;
	//���������� ��������� � ������
	int _count;
public:
	//�������� �������� � ������
	void Add(T* value);
	//�������� �������� � ������
	void Insert(T* value, int index);
	//������� �������� �� ������ �� �������
	void RemoveAt(int index);
	//�������� ������
	void Clear();
	//����� ������ �� �����
	void Show();
	//���������� ������
	~List();
};