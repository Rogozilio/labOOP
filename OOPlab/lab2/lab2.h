#pragma once

extern int globalVariable;

//����� �� ����� Hello world
void PrintHelloWorld();
//�����������
double MakeCalculation(int value1, int value2, char operationKey);
//���������� ������ ����������� ��������� (� ������� ���������)
int GetRootsPointer(int a, int b, int c, double* x1, double* x2);
//���������� ������ ����������� ��������� (� ������� �������)
int GetRootsLink(int a, int b, int c, double& x1, double& x2);
//������� ��������������� ���������� �������
void SummNumbers(int value1, int value2);
void SummNumbers(double value1, double value2);
void SummNumbers(int value1, double value2);
//������� ��������������� ������������� ���������� ����������
void GlobalPlusTwo();
void GlobalMultiplyThree();
void GlobalEqualsOne();
//������� �������� ����� base � ������� power
int GetPower(int base, int power);
//���� - ������ �����
int GuessRandomNumber(int guessNumber, int enteredNumber, int shots);
//������� ���������� ������� � ���������� ��������� �������� ������� � �������
void ArraySorting1(int array[10]);
void ArraySorting2(int array[], int arraySize);
void ArraySorting3(int* array, int arraySize);
//������������ ������
void MultiplyMatrices(int** matr1, int** matr2, int row, int inner, int col);
void lab2();