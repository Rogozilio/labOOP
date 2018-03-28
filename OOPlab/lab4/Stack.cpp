#include "Stack.h"
#include <iostream>

using namespace std;

void Push(Stack*& stack, int value)
{

		Stack *newStack = new Stack;
		newStack->Value = value;
		newStack->Next = stack;
		stack = newStack;
}

int Pop(Stack*& stack)
{
	//TODO: использовать функцию IsEmpty()
	//исправлено
	if (IsEmpty)
	{
		//TODO: а если мы храним в стеке значение "-1", 
		// то как его отличить от возвращаемого кода ошибки?
		//исправлено
		return NULL;
	}
	int temp = stack->Value;
	Stack* newStack = stack;
	//TODO: утечка памяти
	//исправлено
	stack = stack->Next;
	delete newStack;
	return temp;
}

int Top(Stack*& stack)
{
	//TODO: использовать функцию IsEmpty()
	//исправлено
	if (IsEmpty)
	{
		//TODO: а если мы храним в стеке значение "-1", 
		// то как его отличить от возвращаемого кода ошибки?
		//исправлено
		return NULL;
	}
	return stack->Value;
}

int Size(Stack *& stack)
{
	int size = 0;
	Stack* temp = stack;
	while (temp != NULL)
	{
		temp = temp->Next;
		size++;
	}
	return size;
}

bool IsEmpty(Stack *& stack)
{
	return stack == NULL;
}