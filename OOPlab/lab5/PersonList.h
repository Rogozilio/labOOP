#pragma once
#include "Person5.h"
#include "PersonListItem.h"

class PersonList
{
private: 
	PersonListItem* _head; //��������� �� ������ ������
	int _count; //���������� ��������� � ������
public: 
	PersonList(); //����������� ������
	void Add(Person5* person); //�������� �������� � ������
	Person5* Find(int index); //����� �������� �� ���������� �������
	int IndexOf(Person5* person); //������� ������ ��������, ���� �� ���� � ������
	void Remove(Person5* person); //������� �������� �� ������
	void RemoveAt(int index); //������� �������� �� ������ �� �������
	void Clear(); //�������� ������
	int GetCount(); //�������� ���������� ���������
	void Show();//����� ������ �� �����
};

void lab5();