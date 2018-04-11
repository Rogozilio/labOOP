#pragma once
#include "StackItem.h"

//Добавить элемент в стек
void Push(Stack*& stack, int value);
//Удаление верхнего элемента стека
int Pop(Stack*& stack);
//Верхний элемент стека
int Top(Stack*& stack);
//Размер стека
int Size(Stack*& stack);
//Является ли стек пустым?
bool IsEmpty(Stack*& stack);