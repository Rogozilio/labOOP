#pragma once
#include "Person5.h"
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
	void Add(Person5* person); 
	//найти человека по указанному индексу
	Person5* Find(int index); 
	//вернуть индекс человека, если он есть в списке
	int IndexOf(Person5* person); 
	//удалить человека из списка
	void Remove(Person5* person); 
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

void lab5();
void lab6();