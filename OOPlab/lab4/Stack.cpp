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
	//TODO: ������������ ������� IsEmpty()
	if (stack == NULL)
	{
		//TODO: � ���� �� ������ � ����� �������� "-1", 
		// �� ��� ��� �������� �� ������������� ���� ������?
		return -1;
	}
	int temp = stack->Value;
	//TODO: ������ ������
	stack = stack->Next;
	return temp;
}

int Top(Stack*& stack)
{
	//TODO: ������������ ������� IsEmpty()
	if (stack == NULL)
	{
		//TODO: � ���� �� ������ � ����� �������� "-1", 
		// �� ��� ��� �������� �� ������������� ���� ������?
		return -1;
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