#pragma once
//TODO: переименовать этот и остальные файлы БЕЗ цифры лабораторной работы
//исправлено
#include "TemplateListItem.h"

template <class T>
//TODO: переименовать без 7
//исправлено
class TemplateList
{
private:
	//указатель на голову списка
	TemplateListItem<T>* _head = NULL;
	//количество элементов в списке
	int _count;
public:
	//добавить человека в список
	void Add(T* value);
	//добавить человека в список
	void Insert(T* value, int index);
	//удалить человека из списка по индексу
	void RemoveAt(int index);
	//очистить список
	void Clear();
	//вывод списка на экран
	void Show();
	//вывод списка персон на экран
	//TODO: В шаблонном классе не должно быть функций, работающих с конкретным типом данных. Всё должно работать через функцию Show()
	void ShowPerson();
	//Деструктор класса
	~TemplateList();
};