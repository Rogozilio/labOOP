#pragma once
#include "Person4.h"
#include "PersonList4.h"
#include "PersonListItem4.h"


//TODO: Правильнее назвать файл не lab4, а PersonList
//PersonList уже существует
//TODO: Неправильная реализация!
// Функция Add (добавить) не должна ничего возвращать
//исправлено
//Добавление элемента в список
void AddPerson(PersonList4* list, PersonLab4& person);
//Получение длины списка
int GetLength(PersonListItem4* temp);
//Вывести список на экран
void ShowList(PersonListItem4* temp);
//TODO: Неправильная реализация!
// Функции должна возвращать Person, а не PersonList
//исправлено
//Получение указателя списка по индексу
PersonLab4* Get(int index, PersonList4* head);
//Удаление элемента списка по индексу
void RemovePerson(int index, PersonList4* temp);
//Замена значения типа Person по индексу
void InsertPerson(PersonLab4& person, int index, PersonList4* head);
//TODO: Неправильная реализация!
// Функция должна принимать одну переменную PersonList, внутри которой
// должны содержаться ссылки на голову/хвост списка
//исправлено
//Очистка списка
void Clear(PersonList4* temp);
//Назначение cлучайных данных для значения Person
PersonLab4& MakeRandomPerson();
void lab4();