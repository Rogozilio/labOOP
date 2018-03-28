#pragma once
#include "Person4.h"
#include "PersonList4.h"
#include "PersonListItem4.h"


//TODO: ���������� ������� ���� �� lab4, � PersonList
//PersonList ��� ����������
//TODO: ������������ ����������!
// ������� Add (��������) �� ������ ������ ����������
//����������
//���������� �������� � ������
void AddPerson(PersonList4* list, PersonLab4& person);
//��������� ����� ������
int GetLength(PersonListItem4* temp);
//������� ������ �� �����
void ShowList(PersonListItem4* temp);
//TODO: ������������ ����������!
// ������� ������ ���������� Person, � �� PersonList
//����������
//��������� ��������� ������ �� �������
PersonLab4* Get(int index, PersonList4* head);
//�������� �������� ������ �� �������
void RemovePerson(int index, PersonList4* temp);
//������ �������� ���� Person �� �������
void InsertPerson(PersonLab4& person, int index, PersonList4* head);
//TODO: ������������ ����������!
// ������� ������ ��������� ���� ���������� PersonList, ������ �������
// ������ ����������� ������ �� ������/����� ������
//����������
//������� ������
void Clear(PersonList4* temp);
//���������� c�������� ������ ��� �������� Person
PersonLab4& MakeRandomPerson();
void lab4();