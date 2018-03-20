#pragma once
#include "Person4.h"
#include "StructPerson.h"

//Добавление элемента в список
PersonList* Add(PersonLab4& person, PersonList*& head, PersonList*& tail);
//Получение длины списка
int GetLength(PersonList* head);
//Вывести список на экран
void Show(PersonList* head);
//Получение указателя списка по индексу
PersonList* Get(int index, PersonList* head);
//Удаление элемента списка по индексу
void Remove(int index, PersonList*& head, PersonList*& tail);
//Замена значения типа Person по индексу
void Insert(PersonLab4& person, int index, PersonList* head);
//Очистка списка
void Clear(PersonList*& head, PersonList*& tail);
//Назначение cлучайных данных для значения Person
PersonLab4& MakeRandomPerson();
void lab4();