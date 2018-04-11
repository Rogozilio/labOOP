#include "Stack.h"
#include <iostream>

using namespace std;

void Push(Stack*& stack, int value)
{
		Stack *newStack = new Stack;
		newStack->value = value;
		newStack->Next = stack;
		stack = newStack;
}

int Pop(Stack*& stack)
{
	//TODO: ������������ ������� IsEmpty()
	//����������
	if (IsEmpty)
	{
		//TODO: � ���� �� ������ � ����� �������� "-1", 
		// �� ��� ��� �������� �� ������������� ���� ������?
		//����������
		return NULL;
	}
	int temp = stack->value;
	Stack* newStack = stack;
	//TODO: ������ ������
	//����������
	stack = stack->Next;
	delete newStack;
	return temp;
}

int Top(Stack*& stack)
{
	//TODO: ������������ ������� IsEmpty()
	//����������
	if (IsEmpty)
	{
		//TODO: � ���� �� ������ � ����� �������� "-1", 
		// �� ��� ��� �������� �� ������������� ���� ������?
		//����������
		return NULL;
	}
	return stack->value;
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