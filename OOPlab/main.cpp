#include "lab1/lab1.h"
#include "lab2/lab2.h"
#include "lab3/lab3.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int numberLab;
	bool isMenu = true;
	cout << "1)lab1 " << endl;
	cout << "2)lab2 " << endl;
	cout << "3)lab3 " << endl;
	numberLab = CheckSymbol();
	while (isMenu)
	{
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
			default:
			{
				isMenu = false;
				break;
			}
		}
	}
	return 0;
}