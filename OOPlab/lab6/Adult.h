#pragma once
#include "..\lab5\Person5.h"

class Adult : public Person5
{
public:
	//метсо работы
	string WorkPlace;
	//указатель на персону с кем в браке
	Person5* MarriedOn = NULL;
	//данные о взрослом
	string GetDescription();
};
