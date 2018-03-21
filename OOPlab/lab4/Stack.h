#pragma once
//TODO: неправильная реализация! Должна быть дополнительная структура StackItem
//TODO: не надо слово "Структура" в комментарии
//Структура стек
struct Stack
{
	int Value;
	struct Stack *Next;
};

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