#pragma once
#include "StackItem.h"

//�������� ������� � ����
void Push(Stack*& stack, int value);
//�������� �������� �������� �����
int Pop(Stack*& stack);
//������� ������� �����
int Top(Stack*& stack);
//������ �����
int Size(Stack*& stack);
//�������� �� ���� ������?
bool IsEmpty(Stack*& stack);