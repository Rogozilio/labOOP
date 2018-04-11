#pragma once
//TODO: ������������� ���� � ��������� ����� ��� ����� ������������ ������
#include "ListItem7.h"

template <class T>
//TODO: ������������� ��� 7
class List7
{
private:
	//��������� �� ������ ������
	ListItem7<T>* _head = NULL;
	//���������� ��������� � ������
	int _count;
public:
	//�������� �������� � ������
	void Add(T* person);
	//�������� �������� � ������
	void AddIndex(T* person, int index);
	//������� �������� �� ������ �� �������
	void RemoveAt(int index);
	//�������� ������
	void Clear();
	//����� ������ �� �����
	void Show();
	//����� ������ ������ �� �����
	//TODO: � ��������� ������ �� ������ ���� �������, ���������� � ���������� ����� ������. �� ������ �������� ����� ������� Show()
	void ShowPerson();
	//���������� ������
	~List7();
};