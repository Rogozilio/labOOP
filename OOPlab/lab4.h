#pragma once
#include "Person4.h"
#include "StructPerson.h"

PersonList* Add(PersonLab4& person, PersonList*& head, PersonList*& tail);
int GetLength(PersonList* head);
void Show(PersonList* head);
PersonList* Get(int index, PersonList* head);
void Remove(int index, PersonList*& head, PersonList*& tail);
void Insert(PersonLab4& person, int index, PersonList* head);
void Clear(PersonList*& head, PersonList*& tail);
PersonLab4& MakeRandomPerson();
void lab4();