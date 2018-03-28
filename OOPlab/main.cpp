#include "lab1/lab1.h"
#include "lab2/lab2.h"
#include "lab3/lab3.h"
#include "lab4/lab4.h"
#include "lab5/PersonList.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int numberLab;
	bool isMenu = true;
	
	while (isMenu)
	{
		cout << "1)lab1 " << endl;
		cout << "2)lab2 " << endl;
		cout << "3)lab3 " << endl;
		cout << "4)lab4 " << endl;
		cout << "5)lab5 " << endl;
		cout << "0)Выход " << endl;
		numberLab = CheckSymbol();

		switch (numberLab)
		{
			case 1:
			{
				lab1();
				break;
			}
			case 2:
			{
				lab2();
				break;
			}
			case 3:
			{
				lab3();
				break;
			}
			case 4:
			{
				lab4();
				break;
			}
			case 5:
			{
				lab5();
				break;
			}
			case 0:
			{
				isMenu = false;
				break;
			}
			default:
			{
				isMenu = false;
				break;
			}
		}
	}
	return 0;
}