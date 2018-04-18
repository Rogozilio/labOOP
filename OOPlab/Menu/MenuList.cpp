#pragma once
#include <iostream>
#include "../String/String.h"
#include "../List/List.h"
#include "../List/ListItem.h"
#include "../List/List.cpp"
#include "../Person/PersonTools.h"

void lab7()
{
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Демонстрировать на double" << endl
			<< "2) Демонстрировать на *Person" << endl
			<< "3) Демонстрировать на double[5]" << endl
			<< "4) Демонстрировать на List<double>" << endl
			<< "0) Выход из программы" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case 1:
			{
				double* value = new double;
				List<double> Person;
				*value = 1.11;
				Person.Add(value);
				*value = 2.22;
				Person.Add(value);
				*value = 3.33;
				Person.Add(value);
				*value = 4.44;
				Person.Add(value);
				*value = 5.55;
				Person.Add(value);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				*value = 6.66;
				Person.Insert(value, 3);
				Person.Show();
				delete value;
				break;
			}
			case 2:
			{
				List<Person> Person;
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.Add(PersonTools::GetRandomPerson(Female));
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.Add(PersonTools::GetRandomPerson(Female));
				Person.Add(PersonTools::GetRandomPerson(Male));
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				Person.Insert(PersonTools::GetRandomPerson(Male), 3);
				Person.Show();
				break;
			}
			case 3:
			{
				/*double value[5];
				List<double[5]> Person;
				value[0] = 1.11;
				Person.Add(value[0]);
				value[0] = 2.22;
				Person.Add(value[0]);
				value[0] = 3.33;
				Person.Add(value[0]);
				value[0] = 4.44;
				Person.Add(value[0]);
				value[0] = 5.55;
				Person.Add(value[0]);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				value[0] = 6.66;
				Person.Insert(value[0], 3);
				Person.Show();
				delete value;*/
				break;
			}
			case 4:
			{
				double* value = new double;
				List<double>* list = new List<double>;

				List<List<double>> Person;
				*value = 1.11;
				list->Add(value);
				Person.Add(list);
				*value = 2.22;
				list->Add(value);
				Person.Add(list);
				*value = 3.33;
				list->Add(value);
				Person.Add(list);
				*value = 4.44;
				list->Add(value);
				Person.Add(list);
				*value = 5.55;
				list->Add(value);
				Person.Add(list);
				Person.Show();
				Person.RemoveAt(2);
				Person.Show();
				*value = 6.66;
				list->Add(value);
				Person.Insert(list, 3);
				Person.Show();
				delete value;
				break;
			}
			case 0:
			{
				isMenu = false;
				break;
			}
		}
	}
}