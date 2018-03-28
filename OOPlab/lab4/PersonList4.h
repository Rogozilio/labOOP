#pragma once
#include "PersonListItem4.h"
#include <iostream>
//TODO: файл должен именоваться также, как и структура
//исправлено

//TODO: Неправильная реализация! 
// PersonList должен содержать только указатель на голову/хвост списка,
// а данные должны храниться в промежуточной структуре PersonListItem
//исправлено

// голова/хвост списка
struct PersonList4
{
	PersonListItem4* Head = NULL;
	PersonListItem4* Tail = NULL;
};