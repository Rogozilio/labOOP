#pragma once
#include <iostream>

template <class T>
//TODO: Переименовать без 7
class ListItem7
{
public:
	//элемент списка
	//TODO: Переименовать. Список теперь может хранить не только персон, но и любые другие данные
	//TODO: Переименовать по RSDN
	T person;
	//указатель на следующий элемент списка
	//TODO: Переименовать по RSDN
	ListItem7* next = NULL;
};