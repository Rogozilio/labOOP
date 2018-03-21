#pragma once
#include "../lab3/Sex.h"
#include <iostream>
#include <string>

using namespace std;
//TODO: не надо дублировать структуры. »спользовать структуру из 3-ей лабораторной
//—труктура данных хранит информацию о человеке
struct PersonLab4
{
	string Surname;
	string Name;
	int Age;
	Sex Sex;
};
