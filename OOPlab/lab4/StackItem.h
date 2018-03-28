#pragma once
//TODO: неправильная реализация! Должна быть дополнительная структура StackItem
//исправлено
//Cтек
struct Stack
{
	int Value;
	struct Stack *Next;
};
