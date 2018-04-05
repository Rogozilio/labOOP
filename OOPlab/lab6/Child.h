#pragma once
#include "..\lab5\Person5.h"

class Child : public Person5
{
public:
	//название школы
	string School;
	//указатель на персону Mother
	Person5* Mother = NULL;
	//указатель на персону Father
	Person5* Father = NULL;
	//данные о ребенке
	string GetDescription();
};