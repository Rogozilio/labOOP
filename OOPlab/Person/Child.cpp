#include <iostream>
#include <string>
#include <ctime>
#include "Adult.h"
#include "Child.h"
#include "Person.h"
#include "PersonTools.h"

using namespace std;

Child::Child()
{
	//TODO: ������� ��������� ������
	//����������
	Mother = PersonTools::GetRandomPerson(Female);
	//TODO: ������� ��������� ������
	//����������
	Father = PersonTools::GetRandomPerson(Male);
}
//TODO: ��������� � Child.cpp
//����������
string Child ::GetDescription()
{
	//TODO: �������������
	//����������
	string infoPerson = Person::GetDescription();
	
	if (Father != NULL && Mother != NULL)
	{
		infoPerson += "parents are " + Mother->Name + ' ' + Mother->Surname + " and " + Father->Name + ' ' + Father->Surname;
	}
	else if (Father != NULL)
	{
		infoPerson += "father is " + Father->Name + ' ' + Father->Surname;
	}
	else if(Mother != NULL)
	{
		infoPerson +=  "mother is " + Mother->Name + ' ' + Mother->Surname;
	}
	else
	{
		infoPerson += "parents are not specified.";
	}

	return infoPerson;
}