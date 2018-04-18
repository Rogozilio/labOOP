#pragma once
#include <iostream>

template <class T>
//TODO: Переименовать без 7
//исправлено
class ListItem
{
public:
	//элемент списка
	//TODO: Переименовать. Список теперь может хранить не только персон, но и любые другие данные
	//TODO: Переименовать по RSDN
	//исправлено
	T value;
	//указатель на следующий элемент списка
	//TODO: Переименовать по RSDN
	//исправлено
	ListItem<T>* nextValue = NULL;
};