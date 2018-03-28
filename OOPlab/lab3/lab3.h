#pragma once
#include "Person.h"

void lab3();
//����� �� ����� ������� ������
int GetLengthString(char* string);
//����������� ���� �����
char* Concatenate(char* string1, char* string2);
//���������� ���������, ������� ���������� � startIndex � ������������� charCount
char* GetSubstring(char* string, int startIndex, int charCount);
//����� ���������
int FindSubstring(char* string, char* substring);
//������ � ������� �������
char* Uppercase(char* string);
//������ � ������ �������
char* Lowercase(char* string);
//���������� ������ source �� path, name � extension
int SplitFilename(char* source, char* path, char* name, char* extension);
//����� ���������� ������� SplitFilename �� �����
void SplitFilenamePrint(int value, char* path, char* name, char* extension);
//������ ��������� �� �������
char* ReplaceTabsOnSpaces(char* string, int numberTabs);
//������ �������� �� ���������
char* ReplaceSpacesOnTabs(char* string, int numberTabs);
//��������� ������ �������� � ����������
Person ReadPerson();
//��������� ����� ������� �� �����
void PrintPerson(Person& person);