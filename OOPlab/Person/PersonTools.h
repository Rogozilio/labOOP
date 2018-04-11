#pragma once
#include "Person.h"
#include "Sex.h"
#include "Adult.h"
#include "Child.h"

//TODO: Конкретно этот класс не должен быть шаблонным.
//TODO: Шаблоны применяются тогда, когда для разных типов данных у нас есть одна и та же реализация.
//Здесь же для разных типов данных РАЗНАЯ реализация. Механизм шаблонов здесь не подходит.
//Надо переделать на 3 отдельные функции - GetRandomPerson, GetRandomAdult, GetRandomChild
//TODO: Почему PersonTools наследуется от Person? Генерация случайных имён это разновидность человека? (даже сам вопрос тупо звучит...)
//исправлено
class PersonTools
{
public:
	//указатель на случайную персону
	static Person* GetRandomPerson(Sex sex);
	//указатель на случайную взрослую персону
	static Adult* GetRandomAdult(Sex sex);
	//указатель на случайного ребенка
	static Child* GetRandomChild(Sex sex);
};
