#pragma once
#include "Person.h"

class Adult : public Person
{
public:
	//метсо работы
	string WorkPlace;
	//указатель на персону с кем в браке
	Person* MarriedOn = NULL;
	//данные о взрослом
	string GetDescription();
	Adult();
};
