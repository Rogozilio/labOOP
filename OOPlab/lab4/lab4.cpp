#include <iostream>
#include <ctime>
#include <Windows.h>
#include <map>
#include "person4.h"
#include "PersonList4.h"
#include "PersonListItem4.h"

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

PersonLab4& MakeRandomPerson()
{
		srand(time(NULL));
		PersonLab4* person = new PersonLab4;
		//TODO: словарь в глобальной области видимости - неправильно!
		// Он должен создаваться только внутри функции для генерации случайный людей
		//исправлено
		map <int, string> surname = { { 0, "Исаков" },
										{ 1, "Зиновьев" },
										{ 2, "Терентьев" },
										{ 3, "Ефимов" },
										{ 4, "Иванков" },
										{ 5, "Абрамов" },
										{ 6, "Горбачёв" },
										{ 7, "Пахомов" },
										{ 8, "Коновалов" },
										{ 9, "Земсков" },
										{ 10, "Рогов" },
										{ 11, "Румянцев" },
										{ 12, "Лаврентьев" },
										{ 13, "Копылов" },
										{ 14, "Лапшов" },
										{ 15, "Корнилов" } };

		//TODO: словарь в глобальной области видимости - неправильно!
		// Он должен создаваться только внутри функции для генерации случайный людей
		//исправлено
		map <int, string> name = { { 0, "Егор" },
									{ 1, "Павел" },
									{ 2, "Анатолий" },
									{ 3, "Георгий" },
									{ 4, "Всеволод" },
									{ 5, "Борислав" },
									{ 6, "Игорь" },
									{ 7, "Артём" },
									{ 8, "Семён" },
									{ 9, "Афанасий" },
									{ 10, "Вальтер" },
									{ 11, "Матвей" },
									{ 12, "Аркадий" },
									{ 13, "Даниил" },
									{ 14, "Адольф" },
									{ 15, "Арнольд" } };
		person->Surname = surname[rand() % 15];
		person->Name = name[rand() % 15];
		person->Age = 10 + rand() % 60;
		if ((rand() % 2) == 0)
		{
			person->Sex = Female;
		}
		else
		{
			person->Sex = Male;
		}
		return *person;
}

int GetLength(PersonListItem4* temp)
{
	int length = 0;
	if (temp == NULL)
	{
		return 0;
	}
	else
	{
		while (temp != NULL)
		{
			length++;
			temp = temp->Next;
		}
		return length;
	}
}

void AddPerson(PersonList4* list, PersonLab4& person)
{
	PersonListItem4* temp = new PersonListItem4;
	//TODO: Неправильно! В итоге ты добавляешь в список не тот Person,
	// который пришел на вход функции, а случайно сгенерированного.
	// MakeRandomPerson() - отладочная функция, и может вызываться только в main/lab4menu()
	//исправлено
	temp->Person = person;
	if (list->Head == NULL)
	{
		list->Head = temp;
		list->Tail = temp;
	}
	else
	{
		temp->Prev = list->Tail;
		list->Tail->Next = temp;
		list->Tail = temp;
	}
}

void ShowList(PersonListItem4* temp)
{
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
	if (temp == NULL)
	{
		cout << "List is empty!" << endl;
	}
	else
	{
		while (temp != NULL)
		{
			//TODO: если выводить все данные о персоне в одну строку, то тестировать/отлаживать будет удобнее
			//исправлено
			cout << endl << "Фамилия: " << temp->Person.Surname
				<< " | Имя: " << temp->Person.Name
				<< " | Возраст: " << temp->Person.Age
				<< " | Пол: " << temp->Person.Sex << endl;
			temp = temp->Next;
		}
	}
}

PersonLab4* Get(int index, PersonList4* temp)
{
	PersonListItem4* list = temp->Head;
	if (index >= 0 && index < GetLength(temp->Head))
	{
		for (int i = 0; i < index; i++)
		{
			list = list->Next;
		}
		return &list->Person;
	}
	else
	{
		return NULL;
	}
}

void RemovePerson(int index, PersonList4* temp)
{
	PersonListItem4* list =temp->Head;
	int numberIndex = 0;
	//TODO: в случае сложных ветвлений и вложенных условий надо комментировать каждый if
	//исправлено
	if (index >= 0 && index < GetLength(temp->Head))//индекс должен входить в область созданых элементов
	{
		while (index != numberIndex++)
		{
			list = list->Next;
		}

		if (list == temp->Head)//если выбраный элемент = первому элементу списка
		{
			if (list->Next == NULL)//если следующий элемент пустой
			{
				//TODO: утечка памяти
				//исправлено
				delete list;
				temp->Head = NULL;
				temp->Tail = NULL;
			}
			else
			{
				list->Next->Prev = NULL;
				//TODO: утечка памяти
				//исправлено
				temp->Head = list->Next;
				delete list;
			}
		} 
		else if (list == temp->Tail)//если выбраный элемент = последнему элементу списка
		{
			//TODO: утечка памяти
			//исправлено
			temp->Tail->Prev->Next = NULL;
			temp->Tail = temp->Tail->Prev;
			delete list;
		}
		else
		{
			//TODO: утечка памяти
			//исправлено
			list->Prev->Next = list->Next;
			list->Next->Prev = list->Prev;
			delete list;
		}
	}
}

void InsertPerson(PersonLab4& person, int index, PersonList4* temp)
{
	//TODO: неправильная реализация!
	// Insert должен вставлять НОВЫЙ элемент в список, а не заменять старый по указанному индексу
	//исправлено
	if (temp->Head == NULL || index < 0 || index > GetLength(temp->Head))//индекс должен входить в область созданых элементов
	{
		return;
	}

	PersonListItem4* list = temp->Head;
	int i = 0;
	while (i < index)
	{
		list = list->Next;
		i++;
	};

	if (list == temp->Head)//если выбраный элемент = первому элементу списка
	{
		PersonListItem4* newList = new PersonListItem4();
		newList->Person = person;
		temp->Head->Prev = newList;
		newList->Next = temp->Head;
		temp->Head = newList;
	}
	else if (list == temp->Tail)//если выбраный элемент = последнему элементу списка
	{
		PersonListItem4* newList = new PersonListItem4();
		newList->Person = person;
		temp->Tail->Prev->Next = newList;
		newList->Prev = temp->Tail->Prev;
		newList->Next = temp->Tail;
		temp->Tail->Prev = newList;
		temp->Tail->Next = NULL;
	}
	else if (list != NULL)
	{
		PersonListItem4* newList = new PersonListItem4();
		newList->Person = person;
		list->Prev->Next = newList;
		newList->Prev = list->Prev;
		newList->Next = list;
		list->Prev = newList;
	}
}

void Clear(PersonList4* temp)
{
	PersonListItem4* list = temp->Tail;
	for (int i = GetLength(temp->Head); i > 0; i--)
	{
		if (list->Prev != NULL)
		{
			//TODO: если temp удален, то как ты можешь обратиться к его предыдущему элементу?
			// Программа падает при вызове Clear()? Исправить!
			// Функцию тестировал?
			//исправлено
			list = list->Prev;
			delete list->Next;

		}
		else
		{
			delete list;
		}
	}
	temp->Head = NULL;
	temp->Tail = NULL;
}



