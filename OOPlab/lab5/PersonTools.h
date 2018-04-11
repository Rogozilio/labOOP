#pragma once
#include "Person5.h"
#include "PersonList.h"

//TODO: Конкретно этот класс не должен быть шаблонным.
//TODO: Шаблоны применяются тогда, когда для разных типов данных у нас есть одна и та же реализация.
//Здесь же для разных типов данных РАЗНАЯ реализация. Механизм шаблонов здесь не подходит.
//Надо переделать на 3 отдельные функции - GetRandomPerson, GetRandomAdult, GetRandomChild
//TODO: Почему PersonTools наследуется от Person5? Генерация случайных имён это разновидность человека? (даже сам вопрос тупо звучит...)
template <typename T>
class PersonTools : public Person5
{
public:
	//указатель на случайную персону
	static T* GetRandomPerson(bool sex, bool isChild);
};
