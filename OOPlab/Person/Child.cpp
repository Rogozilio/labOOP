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
	//TODO: никакой генерации данных
	//исправлено
	Mother = PersonTools::GetRandomPerson(Female);
	//TODO: никакой генерации данных
	//исправлено
	Father = PersonTools::GetRandomPerson(Male);
}
//TODO: перенести в Child.cpp
//исправлено
string Child ::GetDescription()
{
	//TODO: переименовать
	//исправлено
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