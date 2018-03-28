#pragma once
#include "Person.h"

void lab3();
//Вывод на экран размера строки
int GetLengthString(char* string);
//Объединение двух строк
char* Concatenate(char* string1, char* string2);
//Возвращает подстраку, которая начинается с startIndex и заканчивается charCount
char* GetSubstring(char* string, int startIndex, int charCount);
//поиск подстроки
int FindSubstring(char* string, char* substring);
//Строку в верхний регистр
char* Uppercase(char* string);
//Строку в нижний регистр
char* Lowercase(char* string);
//Разделение строки source на path, name и extension
int SplitFilename(char* source, char* path, char* name, char* extension);
//Вывод результата функции SplitFilename на экран
void SplitFilenamePrint(int value, char* path, char* name, char* extension);
//Замена табуляции на пробелы
char* ReplaceTabsOnSpaces(char* string, int numberTabs);
//Замена пробелов на табуляцию
char* ReplaceSpacesOnTabs(char* string, int numberTabs);
//Считывает данные человека с клавиатуры
Person ReadPerson();
//Выполняет вывод персоны на экран
void PrintPerson(Person& person);