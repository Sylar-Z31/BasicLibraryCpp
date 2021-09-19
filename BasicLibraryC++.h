#pragma once

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void Asalmi(unsigned long long int n) 
{
	if (n > 1)
	{
		bool asal_D = true;
		unsigned long long int i, sayi = (int)sqrt(n);

		for (i = 2; i <= sayi; i++)
		{
			if (n % i == 0) { asal_D = false; break; }
		}
		if (asal_D == true) { cout << n << " Asal bir sayidir" << endl; }
		else { cout << n << " Asal bir sayi degildir" << endl; }
	}
	else { cout << "Asal sayilar 2 den baslar !" << endl; }
}

void NBeginPrime(unsigned long long int size)
{
	vector <unsigned long long int> dizi;
	unsigned long long int i, j, sayi = 0, prime = 2;

	for (i = 0; i < size;)
	{
		bool asal_D = true;
		sayi = (int)sqrt(prime);

		j = 2;
		for (; j <= sayi; j++)
		{
			if (prime % j == 0) { asal_D = false; prime++; break; }
		}
		if (asal_D == true) { dizi.push_back(prime++); i++; }
	}
	for (unsigned long long int x : dizi) { cout << x << " "; }
}

void PerfectNumber(unsigned long long int sayi)
{
	unsigned long long int Toplam = 0;

	for (unsigned long long int i = 1; i <= sayi; i++)
	{
		if (sayi % i == 0) { Toplam += i; }
	}
	if (Toplam == 2 * sayi) { cout << sayi << " Mukemmel sayidir" << endl; }
	else { cout << sayi << " Mukemmel sayi degildir !" << endl; }
}

void NPerfectNumber(unsigned long long int size)
{
	unsigned long long int i, j, sayi = 1, Toplam = 0;

	for (i = 0; i < size;)
	{
		Toplam = 0;
		j = 1;
		for (; j <= sayi; j++)
		{
			if (sayi % j == 0) { Toplam += j; }
		}
		if (Toplam == sayi * 2) { cout << sayi << " "; i++; }
		sayi++;
	}
}

void UMatris(unsigned short int satir)
{
	for (unsigned short int i = 0; i < satir; i++)
	{
		for (unsigned short int j = 0; j < satir - (i + 1); j++) { cout << " "; }

		for (unsigned short int k = 0; k < (i * 2) + 1; k++) { cout << "*"; }
		cout << endl;
	}
}

void TUMatris(unsigned short int satir)
{
	for (unsigned short int i = 0; i < satir; i++)
	{
		for (unsigned short int j = 0; j < i; j++) { cout << " "; }

		for (unsigned short int k = 0; k < satir + 4 - (2 * i); k++) { cout << "*"; }
		cout << endl;
	}
}

void DMatris(unsigned short int satir)
{
	for (unsigned short int i = 0; i < satir; i++)
	{
		for (unsigned short int j = 0; j < satir - (satir - (i + 1)); j++) { cout << "*"; }
		cout << endl;
	}
}

void NFib(unsigned long long int size)
{
	unsigned long long i = 0, NewValue = 0, begin = 1, Toplam = 0;

	for (i; i < size; i++)
	{
		Toplam = begin + NewValue;
		NewValue = begin;
		begin = Toplam;

		cout << NewValue << " ";
	}
}

int RFib(unsigned long long int size)
{
	if (size == 0) { return 0; }
	else if (size == 1) { return 1; }
	else { return RFib(size - 1) + RFib(size - 2); }
}

