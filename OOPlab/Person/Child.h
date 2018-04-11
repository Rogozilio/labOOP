#pragma once
#include "Person.h"

class Child : public Person
{
public:
	//название школы
	string School;
	//указатель на персону Mother
	Person* Mother = NULL;
	//указатель на персону Father
	Person* Father = NULL;
	//данные о ребенке
	string GetDescription();
	Child();
};