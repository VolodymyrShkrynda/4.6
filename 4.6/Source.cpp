// Lab_03_4.cpp
// < Шкринда Володимир
// Лабораторна робота № 4.6
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 22
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P,P1, P2;
	int n, k;
	k = 1;
	P2 = 1;
	while (k<=20)
	{
		P1 = 1;
		n = 1;
		while (n<=25-k)
		{
			P1 *= ((k*1.00 - n) / (k*1.00 + n) + 1);//перший добуток
			n++;
		}
		P2 *= P1*1.00;// другий добуток 
		k++;
	}
	P = P1 * P2;// добуток першого і другого
	cout << "1) P1 =  " << P1 << endl;
	cout << "1) P2 =  " << P2 << endl;
	cout << "1) P  =  " << P << endl;
	cout << "_____________________" << endl;
	P2 = 1;
	k = 1;
	do
	{
		P1 = 1;
		n = 1;
		do
		{

			P1 *= ((k * 1.00 - n) / (k * 1.00 + n) + 1);
			n++;
		} while (n <= 25 - k);
		P2 *= P1;
		k++;
	} while (k <= 20);
	P = P1 * P2;
	cout << "2) P1 =  " << P1 << endl;
	cout << "2) P2 =  " << P2 << endl;
	cout << "2) P  =  " << P << endl;
	cout << "_____________________" << endl;
	P2 = 1;
	for (k = 1; k <= 20; k++)

	{
		P1 = 1;
		for (n = 1; n <= 25-k; n++)

		{
			P1 *= ((k * 1.00 - n) / (k * 1.00 + n) + 1);

		}
		P2 *=P1;

	}
	P = P1 * P2;
	cout << "3) P1 =  " << P1 << endl;
	cout << "3) P2 =  " << P2 << endl;
	cout << "3) P  =  " << P << endl;
	cout << "_____________________" << endl;
//	for (k = 1; k <= 20; k++)
//
//	{
//		P1 = 1;
//		for (n = 1; n <= 25-k; n++)
//
//		{
//			P1 *= ((k * 1.00 - n) / (k * 1.00 + n) + 1);
//
//		}
//		P *= P1;
//
//	}
//	cout << "3) P1 =  " << P1 << endl;
//	cout << "3) P  =  " << P << endl;
	cin.get();
	return 0;
}
