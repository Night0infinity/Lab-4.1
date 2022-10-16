// Lab_04.1.cpp
// < Курило, Любомир >
// Лабораторна робота № 4.1
// Цикли.
// Варіант 8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int K, N, i;
	double P;
	cout << "K = "; cin >> K;
	cout << "N = "; cin >> N;
	P = 1;
	i = K;
	while (i <= N)
	{
		P *= ((1.0 * K / i) + (1.0 * i / N));
		i++;
	}
	cout << P << endl;
	P = 1;
	i = K;
	do {
		P *= ((1.0 * K / i) + (1.0 * i / N));
		i++;
	} while (i <= N);
	cout << P << endl;
	P = 1;
	for (i = K; i <= N; i++)
	{
		P *= (1.0 * K / i) + (1.0 * i / N);
	}
	cout << P << endl;
	P = 1;
	for (i = N; i >= K; i--)
	{
		P *= (1.0 * K / i) + (1.0 * i / N);
	}
	cout << P << endl;
	return 0;
}