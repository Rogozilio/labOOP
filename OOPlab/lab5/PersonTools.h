#pragma once
#include "Person5.h"
#include "PersonList.h"

class PersonTools : public Person5
{
public:
	static Person5* GetRandomPerson(bool sex, bool isChild);//указатель на случайную персону
};
