#pragma once
#include "Person5.h"
#include "PersonListItem.h"

class PersonList
{
private: 
	PersonListItem* _head = NULL; //указатель на голову списка
	int _count; //количество элементов в списке
public:
	void Add(Person5* person); //добавить человека в список
	Person5* Find(int index); //найти человека по указанному индексу
	int IndexOf(Person5* person); //вернуть индекс человека, если он есть в списке
	void Remove(Person5* person); //удалить человека из списка
	void RemoveAt(int index); //удалить человека из списка по индексу
	void Clear(); //очистить список
	int GetCount(); //получить количество элементов
	void Show();//вывод списка на экран
	~PersonList(); //Деструктор класса
};

void lab5();
void lab6();