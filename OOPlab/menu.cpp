#pragma once
#include "lab1/lab1.h"
#include "lab2/lab2.h"
#include "lab3/lab3.h"
#include "lab3/MenuEnum.h"
#include "lab3/Person.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>

using namespace std;

void lab1()
{
	setlocale(LC_ALL, "rus");
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Hello World " << endl
			<< "2) Ñóììà öåëî÷èñëåííûõ ïåðåìåííûõ " << endl
			<< "3) Äåëåíèå ÷èñåë" << endl
			<< "4) Ââîä/Âûâîä ïåðåìåííûõ" << endl
			<< "5) Ðàáîòà ñ óêàçàòåëåì" << endl
			<< "6) ×åòíîå/Íå÷åòíîå ÷èñëî" << endl
			<< "7) Êðàòíîñòü ÷èñëà" << endl
			<< "8) Öèêë ñ ïðåä-óñëîâèåì" << endl
			<< "9) Öèêë ñ ïîñò-óñëîâèåì" << endl
			<< "10) Èòåðàöèîííûé öèêë" << endl
			<< "11) Îïåðàòîð break" << endl
			<< "12) ßâíîå è íåÿâíîå ïðåîáðàçîâàíèå" << endl
			<< "0) Âûõîä èç ïðîãðàììû" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case 1:
				HelloWorld();
				break;
			case 2:
				SumVariables();
				break;
			case 3:
				DivVariables();
				break;
			case 4:
				InputVariables();
				break;
			case 5:
				Pointer();
				break;
			case 6:
				EvenAndOdd();
				break;
			case 7:
				EvenAndOdd2();
				break;
			case 8:
				UseWhile();
				break;
			case 9:
				UseDoWhile();
				break;
			case 10:
				Cycle();
				break;
			case 11:
				CycleEnd();
				break;
			case 12:
				ExplicitType();
				break;
			case 0:
				isMenu = false;
				break;
			default:
				cout << "Ïîâòîðèòå ââîä  ";
				break;
		}
	}
}

void lab2()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int key;
	bool isMenu = true;
	while (isMenu)
	{

		cout << "1) Hello World " << endl
			<< "2) Êàëüêóëÿòîð " << endl
			<< "3) Êîðåíü êâàäðàòíîãî óðàâíåíèÿ (óêàçàòåëè) " << endl
			<< "4) Êîðåíü êâàäðàòíîãî óðàâíåíèÿ (ññûëêè)" << endl
			<< "5) Ïåðåãðóçêà ôóíêöèé" << endl
			<< "6) Ãëîáàëüíûå ïåðåìåííûå" << endl
			<< "7) Âîçâåäåíèå ÷èñëà â ñòåïåíü" << endl
			<< "8) Óãàäàé öåëîå ÷èñëî" << endl
			<< "9) Ñîðòèðîâêà ìàññèâà" << endl
			<< "10) Ïåðåìíîæåíèå ìàòðèö" << endl
			<< "0) Âûõîä èç ïðîãðàììû" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case 1:
			{
				PrintHelloWorld();
				break;
			}
			case 2:
			{
				int value1;
				int value2;
				char operationKey;

				cout << "Ââåäèòå ïåðâûé îïåðàíä: ";
				cin >> value1;

				cout << "Ââåäèòå âòîðîé îïåðàíä: ";
				cin >> value2;

				do 
				{
					cout << "Ââåäèòå îïåðàòîð: ";
					cin >> operationKey;
				} while ((operationKey != '+') && (operationKey != '-') && 
					(operationKey != '*') && (operationKey != '/') && 
					(operationKey != '%'));
				cout << MakeCalculation(value1, value2, operationKey) << endl;
				break;
			}
			case 3:
			{
				double x1;
				double x2;
				double *x1Pointer = &x1;
				double *x2Pointer = &x2;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 1, b = 3, c = 2 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsPointer(1, 3, 2, x1Pointer, x2Pointer) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 1, b = 4, c = 0 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsPointer(1, 4, 0, x1Pointer, x2Pointer) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 0, b = 1, c = 2 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsPointer(0, 1, 2, x1Pointer, x2Pointer) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 0, b = 0, c = 3 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsPointer(0, 0, 3, x1Pointer, x2Pointer) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 0, b = 1, c = 0 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsPointer(0, 1, 0, x1Pointer, x2Pointer) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 4, b = 1, c = 4 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsPointer(4, 1, 4, x1Pointer, x2Pointer) << endl << endl;
				break;
			}
			case 4:
			{
				double x1;
				double x2;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 1, b = 3, c = 2 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsLink(1, 3, 2, x1, x2) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 1, b = 4, c = 0 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsLink(1, 4, 0, x1, x2) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 0, b = 1, c = 2 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsLink(0, 1, 2, x1, x2) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 0, b = 0, c = 3 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsLink(0, 0, 3, x1, x2) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 0, b = 1, c = 0 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsLink(0, 1, 0, x1, x2) << endl << endl;

				cout << "Àðãóìåíòû êâàäðàòíîãî óðàâíåíèÿ: à = 4, b = 1, c = 4 " << endl;
				cout << "Êîëè÷åñòâî êîðíåé êâàäðàòíîãî óðàâíåíèÿ = " << GetRootsLink(4, 1, 4, x1, x2) << endl << endl;
				break;
			}
			case 5:
			{
				int a = 1;
				int b = 2;
				SummNumbers(a, b);
				double x = 3.0;
				double y = 4.0;
				SummNumbers(x, y);
				SummNumbers(a, y);
				float m = 5.0;
				float n = 6.0;
				SummNumbers(m, n);
				break;
			}
			case 6:
			{
				cout << "Global Variable: " << globalVariable << endl;
				GlobalPlusTwo();
				cout << "Global Variable: " << globalVariable << endl;
				GlobalMultiplyThree();
				cout << "Global Variable: " << globalVariable << endl;
				GlobalEqualsOne();
				cout << "Global Variable: " << globalVariable << endl;
				globalVariable = 5;
				cout << "Global Variable: " << globalVariable << endl;
				break;
			}
			case 7:
			{
				int base;
				int power;
				cout << "Ââåäèòå öåëîå ÷èñëî: ";
				cin >> base;
				cout << "Ââåäèòå ñòåïåíü â êîòîðóþ õîòèòå âîçâåñòè äàííîå ÷èñëî: ";
				cin >> power;
				cout << "Ðåçóëüòàò = " << GetPower(base, power) << endl;
			}
			case 8:
			{
				int guessNumber = rand() % 10; // ãåíåðàöèÿ óãàäûâàåìîãî ÷èñëà
				int enteredNumber = -1; // ââîäèìîå ïîëüçîâàòåëåì ÷èñëî
				int shots = 3; // êîëè÷åñòâî ïîïûòîê
				cout << "Êîìïüþòåð çàãàäàë ÷èñëî îò 0 äî 10! ";
				GuessRandomNumber(guessNumber, enteredNumber, shots);
			}
			case 9:
			{
				const int arraySize = 10;
				int array[arraySize];

				for (int i = 0; i < arraySize; i++)
				{
					array[i] = rand() % 20;
				}

				cout << "Ïåðâûé ñïîñîá ñîðòèðîâêè: " << endl;
				ArraySorting1(array);
				cout << "Âòîðîé ñïîñîá ñîðòèðîâêè: " << endl;
				ArraySorting2(array, arraySize);
				cout << "Òðåòèé ñïîñîá ñîðòèðîâêè: " << endl;
				ArraySorting3(array, arraySize);
			}
			case 10:
			{
				int matrSize1;
				int matrSize2;
				int matrSize3;

				cout << "Ââåäèòå äëèíó ïåðâîé ìàòðèöû: ";
				cin >> matrSize1;
				cout << "Ââåäèòå øèðèíó ïåðâîé ìàòðèöû è äëèíó âòîðîé ìàòðèöû: ";
				cin >> matrSize2;
				cout << "Ââåäèòå øèðèíó âòîðîé ìàòðèöû: ";
				cin >> matrSize3;

				int **matr1 = new int *[matrSize1];
				int **matr2 = new int *[matrSize2];

				for (int i = 0; i < matrSize1; i++)
				{
					matr1[i] = new int[matrSize2];
				}
				for (int i = 0; i < matrSize2; i++)
				{
					matr2[i] = new int[matrSize3];
				}

				cout << "Âûâîä ïåðâîé ìàòðèöû: " << endl;
				for (int i = 0; i < matrSize1; i++)
				{
					for (int j = 0; j < matrSize2; j++)
					{
						matr1[i][j] = rand() % 10;
						cout << matr1[i][j] << ' ';
					}
					cout << endl;
				}
				cout << "Âûâîä âòîðîé ìàòðèöû: " << endl;
				for (int i = 0; i < matrSize2; i++)
				{
					for (int j = 0; j < matrSize3; j++)
					{
						matr2[i][j] = rand() % 10;
						cout << matr2[i][j] << ' ';
					}
					cout << endl;
				}
				MultiplyMatrices(matr1, matr2, matrSize1, matrSize2, matrSize3);
				delete [] matr1;
				delete [] matr2;
			}
			case 0:
			{
				isMenu = false;
				break;
			}
			default:
			{
				cout << "Ïîâòîðèòå ââîä  ";
				break;
			}
		}
	}
}

void lab3()
{
	setlocale(LC_ALL, "rus");
	int key;
	bool isMenu = true;
	while (isMenu)
	{
		cout << "1) Îïðåäåëèòü äëèíó ñòðîêè" << endl
			<< "2) Îáúåäèíåíèå äâóõ ñòðîê" << endl
			<< "3) Âåðíóòü ïîäñòðîêó" << endl
			<< "4) Ïîèñê ïîäñòðîêè" << endl
			<< "5) Ïåðåâîä ñòðîêè â âåðõíèé ðåãèñòð" << endl
			<< "6) Ïåðåâîä ñòðîêè â íèæíèé ðåãèñòð" << endl
			<< "7) Ðàçäåëåíèå èñõîäíîé ñòðîêè íà path, name è extension" << endl
			<< "8) Çàìåíèòü òàáóëÿöèþ íà ïðîáåëû" << endl
			<< "9) Çàìåíèòü ïðîáåëû íà òàáóëÿöèþ" << endl
			<< "10) Ââîä è âûâîä äàííûõ ñòðóêòóðû Person" << endl
			<< "0) Âûõîä èç ïðîãðàììû" << endl;
		key = CheckSymbol();

		switch (key)
		{
			case GetLengthEnum:
			{
				char string[] = { "" };
				cout << "Ââåäèòå ñòðîêó: ";
				cin.ignore();
				cin.getline(string, 256);
				cout << "Äëèíà ñòðîêè = " << GetLength(string) << endl;
				break;
			}
			case ConcatenateEnum:
			{
				char string1[] = { "" };
				char string2[] = { "" };

				cout << "Ââåäèòå ïåðâóþ ñòðîêó: ";
				cin.ignore();
				cin.getline(string1, 256);
				cout << "Ââåäèòå âòîðóþ ñòðîêó: ";
				cin.getline(string2, 256);
				cout << Concatenate(string1, string2) << endl;
				break;
			}
			case GetSubstringEnum:
			{
				char string[] = { "Hello, World!" };
				cout << GetSubstring(string, 2, 4) << endl;
				cout << GetSubstring(string, -3, 3) << endl;
				cout << GetSubstring(string, 2, -4) << endl;
				cout << GetSubstring(string, 7, 8) << endl;
				break;
			}
			case FindSubstringEnum:
			{
				cout << FindSubstring("Lorem ipsum aset amet", "ipsum a") << endl;
				cout << FindSubstring("Lorem ipsum aset amet", "Arom") << endl;
				cout << FindSubstring("Lorem ipsum aset ametsum", "sum") << endl;
				break;
			}
			case UppercaseEnum:
			{
				cout << "Èñõîäíàÿ ñòðîêà: Different cases in That string, also 1 and 2 numbers!" << endl;
				cout << "Ðåçóëüòàò: " << Uppercase("Different cases in That string, also 1 and 2 numbers!") << endl;
				break;
			}
			case LowercaseEnum:
			{
				cout << "Èñõîäíàÿ ñòðîêà: Different cases in That string, also 1 and 2 numbers!" << endl;
				cout << "Ðåçóëüòàò: " << Lowercase("Different cases in That string, also 1 and 2 numbers!") << endl;
				break;
			}
			case SplitFilenameEnum:
			{
				char path[100];
				char name[100];
				char extension[100];
				SplitFilename("d:\\folder\\file.exe", path, name, extension);
				SplitFilename("d:\\folder\\subfolder\\file.exe", path, name, extension);
				SplitFilename("d:\\folder\\subfolder\\file", path, name, extension);
				SplitFilename("file.txt", path, name, extension);
				SplitFilename("d:\\folder\\.exe", path, name, extension);
				SplitFilename("d:\\fo lder\\file.exe", path, name, extension);
				SplitFilename("d:\\folder\\file.dpf.dfl.xtx.exe", path, name, extension);
				break;
			}
			case ReplaceTabsOnSpacesEnum:
			{
				cout << ReplaceTabsOnSpaces("Cake\tis\ta lie!", 4) << endl;
				cout << ReplaceTabsOnSpaces("Cake\t\tis a lie!", 4) << endl;
				cout << ReplaceTabsOnSpaces("\tCake is \tlie!", 4) << endl;
				break;
			}
			case ReplaceSpacesOnTabsEnum:
			{
				cout << ReplaceSpacesOnTabs("Cake::::is::a:lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake::::is::::a:lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake:is:a:::::::lie!", 4) << endl;
				cout << ReplaceSpacesOnTabs("Cake:is::a:lie!", 4) << endl;
				break;
			}
			case 10:
			{
				Person person1 = ReadPerson();
				PrintPerson(person1);
				break;
			}
			case 0:
			{
				isMenu = false;
				break;
			}
			default:
			{
				cout << "Ïîâòîðèòå ââîä  ";
				break;
			}
		}
	}
}
