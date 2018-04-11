#pragma once
#include "../Person/Person.h"
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
	void Add(Person* person); 
	//����� �������� �� ���������� �������
	Person* Find(int index); 
	//������� ������ ��������, ���� �� ���� � ������
	int IndexOf(Person* person); 
	//������� �������� �� ������
	void Remove(Person* person); 
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

void lab4();
void lab5();
void lab6();
void lab7();