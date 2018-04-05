#pragma once
#include "Person5.h"
#include "PersonList.h"

template <typename T>
class PersonTools : public Person5
{
public:
	//указатель на случайную персону
	static T* GetRandomPerson(bool sex, bool isChild);
};
