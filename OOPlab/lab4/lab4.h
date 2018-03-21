#pragma once
#include "Person4.h"
#include "StructPerson.h"


//TODO: Правильнее назвать файл не lab4, а PersonList
//TODO: Неправильная реализация!
// Функция Add (добавить) не должна ничего возвращать
//Добавление элемента в список
PersonList* Add(PersonLab4& person, PersonList*& head, PersonList*& tail);

//Получение длины списка
int GetLength(PersonList* head);
//Вывести список на экран
void Show(PersonList* head);
//TODO: Неправильная реализация!
// Функции должна возвращать Person, а не PersonList
//Получение указателя списка по индексу
PersonList* Get(int index, PersonList* head);
//Удаление элемента списка по индексу
void Remove(int index, PersonList*& head, PersonList*& tail);
//Замена значения типа Person по индексу
void Insert(PersonLab4& person, int index, PersonList* head);
//TODO: Неправильная реализация!
// Функция должна принимать одну переменную PersonList, внутри которой
// должны содержаться ссылки на голову/хвост списка
//Очистка списка
void Clear(PersonList*& head, PersonList*& tail);
//Назначение cлучайных данных для значения Person
PersonLab4& MakeRandomPerson();
void lab4();