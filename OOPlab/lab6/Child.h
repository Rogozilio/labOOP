#pragma once
#include "..\lab5\Person5.h"

class Child : public Person5
{
public:
	string School;//название школы
	Person5* Mother = NULL;//указатель на персону Mother
	Person5* Father = NULL;//указатель на персону Father
	string GetDesciption(Person5 person1);//данные о ребенке
};