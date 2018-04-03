#pragma once
#include "lab5\Person5.h"

class Adult : public Person5
{
public:
	string WorkPlace;//метсо работы
	Person5* MarriedOn = NULL;//указатель на персону с кем в браке
	string GetDesciption(Person5 person1);//данные о взрослом
};
