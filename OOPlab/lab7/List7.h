#pragma once
#include "ListItem7.h"

template <class T>
class List7
{
private:
	//указатель на голову списка
	ListItem7<T>* _head = NULL;
	//количество элементов в списке
	int _count;
public:
	//добавить человека в список
	void Add(T* person);
	//добавить человека в список
	void AddIndex(T* person, int index);
	//удалить человека из списка по индексу
	void RemoveAt(int index);
	//очистить список
	void Clear();
	//вывод списка на экран
	void Show();
	//вывод списка персон на экран
	void ShowPerson();
	//Деструктор класса
	~List7();
};