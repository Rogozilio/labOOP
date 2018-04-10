#pragma once
#include <iostream>

template <class T>
class ListItem7
{
public:
	//элемент списка
	T person;
	//указатель на следующий элемент списка
	ListItem7* next = NULL;
};