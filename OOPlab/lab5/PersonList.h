#pragma once
#include "Person5.h"
#include "PersonListItem.h"

class PersonList
{
private: 
	//��������� �� ������ ������
	PersonListItem* _head = NULL; 
	//���������� ��������� � ������
	int _count; 
public:
	//�������� �������� � ������
	void Add(Person5* person); 
	//����� �������� �� ���������� �������
	Person5* Find(int index); 
	//������� ������ ��������, ���� �� ���� � ������
	int IndexOf(Person5* person); 
	//������� �������� �� ������
	void Remove(Person5* person); 
	//������� �������� �� ������ �� �������
	void RemoveAt(int index); 
	//�������� ������
	void Clear(); 
	//�������� ���������� ���������
	int GetCount(); 
	//����� ������ �� �����
	void Show();
	//���������� ������
	~PersonList(); 
};

void lab5();
void lab6();