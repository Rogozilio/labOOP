#pragma once
//TODO: ������������� ���� � ��������� ����� ��� ����� ������������ ������
//����������
#include "TemplateListItem.h"

template <class T>
//TODO: ������������� ��� 7
//����������
class TemplateList
{
private:
	//��������� �� ������ ������
	TemplateListItem<T>* _head = NULL;
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
	//����� ������ ������ �� �����
	//TODO: � ��������� ������ �� ������ ���� �������, ���������� � ���������� ����� ������. �� ������ �������� ����� ������� Show()
	void ShowPerson();
	//���������� ������
	~TemplateList();
};