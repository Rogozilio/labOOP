#pragma once
#include "Person5.h"
#include "PersonList.h"

template <typename T>
class PersonTools : public Person5
{
public:
	//��������� �� ��������� �������
	static T* GetRandomPerson(bool sex, bool isChild);
};
