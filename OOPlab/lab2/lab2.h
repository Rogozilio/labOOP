#pragma once

extern int globalVariable;

//Вывод на экран Hello world
void PrintHelloWorld();
//Калькулятор
double MakeCalculation(int value1, int value2, char operationKey);
//Нахождение корней квадратного уравнения (с помощью указателя)
int GetRootsPointer(int a, int b, int c, double* x1, double* x2);
//Нахождение корней квадратного уравнения (с помощью адресса)
int GetRootsLink(int a, int b, int c, double& x1, double& x2);
//Функции демонстрирующие перегрузку функций
void SummNumbers(int value1, int value2);
void SummNumbers(double value1, double value2);
void SummNumbers(int value1, double value2);
//Функции демонстрирующие использование глобальных переменных
void GlobalPlusTwo();
void GlobalMultiplyThree();
void GlobalEqualsOne();
//Функция возводит число base в степень power
int GetPower(int base, int power);
//Игра - угадай число
int GuessRandomNumber(int guessNumber, int enteredNumber, int shots);
//Функции сортировки массива с различными способами передачи массива в функцию
void ArraySorting1(int array[10]);
void ArraySorting2(int array[], int arraySize);
void ArraySorting3(int* array, int arraySize);
//Перемножение матриц
void MultiplyMatrices(int** matr1, int** matr2, int row, int inner, int col);
void lab2();