#pragma once
//TODO: ������������ ����������! ������ ���� �������������� ��������� StackItem
//TODO: �� ���� ����� "���������" � �����������
//��������� ����
struct Stack
{
	int Value;
	struct Stack *Next;
};

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