#pragma once
#include "../Person/Person.h"
#include "PersonListItem.h"

class PersonList
{
private: 
	//указатель на голову списка
	PersonListItem* _head = NULL; 
	//количество элементов в списке
	int _count; 
public:
	//добавить человека в список
	void Add(Person* person); 
	//найти человека по указанному индексу
	Person* Find(int index); 
	//вернуть индекс человека, если он есть в списке
	int IndexOf(Person* person); 
	//удалить человека из списка
	void Remove(Person* person); 
	//удалить человека из списка по индексу
	void RemoveAt(int index); 
	//очистить список
	void Clear(); 
	//получить количество элементов
	int GetCount(); 
	//вывод списка на экран
	void Show();
	//Деструктор класса
	~PersonList(); 
};

void lab4();
void lab5();
void lab6();
void lab7();