#pragma once
#include "Person4.h"
#include "StructPerson.h"


//TODO: ���������� ������� ���� �� lab4, � PersonList
//TODO: ������������ ����������!
// ������� Add (��������) �� ������ ������ ����������
//���������� �������� � ������
PersonList* Add(PersonLab4& person, PersonList*& head, PersonList*& tail);

//��������� ����� ������
int GetLength(PersonList* head);
//������� ������ �� �����
void Show(PersonList* head);
//TODO: ������������ ����������!
// ������� ������ ���������� Person, � �� PersonList
//��������� ��������� ������ �� �������
PersonList* Get(int index, PersonList* head);
//�������� �������� ������ �� �������
void Remove(int index, PersonList*& head, PersonList*& tail);
//������ �������� ���� Person �� �������
void Insert(PersonLab4& person, int index, PersonList* head);
//TODO: ������������ ����������!
// ������� ������ ��������� ���� ���������� PersonList, ������ �������
// ������ ����������� ������ �� ������/����� ������
//������� ������
void Clear(PersonList*& head, PersonList*& tail);
//���������� c�������� ������ ��� �������� Person
PersonLab4& MakeRandomPerson();
void lab4();