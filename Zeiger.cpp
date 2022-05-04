// Zeiger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void tauscheMitZeiger(int*, int*);

int main()
{
	locale::global(locale("German_germany"));

	int a = 7;

	int* p;

	// int r
	int* q, r;

	q = nullptr;

	// q = 0;
	// q = NULL;

	r = 0;
	// r = nullptr;
	// r = static_cast<int>(nullptr);

	if (q == nullptr)
		cout << "q == nullptr: " << q << endl;

	p = &a;

	q = p;

	cout << "Wert der Variablen 'a': " << a << endl;

	cout << "Adresse der Variablen 'a': " << &a << endl;

	cout << "'p': " << p << endl;

	cout << "'&p': " << &p << endl;

	cout << "'*p': " << *p << endl;

	*p = 42;

	cout << "Wert der Variablen 'a': " << a << endl;

	cout << "p[4]: " << p[4] << endl;
	cout << "*(p + 4): " << *(p + 4) << endl;

	cout << "'p': " << p << endl;

	p += 4;

	cout << "'*p': " << *p << endl;
	cout << "'p': " << p << endl;

	cout << "p[-4]: " << p[-4] << endl;

	int b = 99;

	cout << "a: " << a << ", b: " << b << endl;

	tauscheMitZeiger(q, &b);

	cout << "a: " << a << ", b: " << b << endl;

	void* voidPtr = nullptr;

	int* intPtr = &a;

	voidPtr = intPtr;

	// intPtr = voidPtr; // Fehler

	intPtr = (int*)voidPtr;
	intPtr = static_cast<int*>(voidPtr);

	cout << "voidPtr: " << voidPtr << endl;

	// cout << "*voidPtr: " << *voidPtr << endl;

	int lotto[]{ 11, 19, 32, 37, 43, 45 };

	p = lotto;

	q = &lotto[0];

	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl;
	cout << "p[0]: " << p[0] << endl;

	cout << "q: " << q << endl;
	cout << "*q: " << *q << endl;
	cout << "q[0]: " << q[0] << endl;

	for (int i = 0; i < size(lotto); i++)
	{
		cout << p[i] << ", "; 
	}

	cout << endl;

	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl;

	for (int i = 0; i < size(lotto); i++)
	{
		/*cout << *p << ", ";
		p++;*/

		cout << *p++ << ", ";
	}

	cout << endl;

	cout << "p: " << p << endl;
	cout << "*--p: " << *--p << endl;
	cout << "--*p: " << --*p << endl;

	p = p - 5;

	cout << "*p: " << *p << endl;

	for (int i = 0; i < size(lotto); i++)
	{
		cout << *p++ << ", ";
	}

	cout << endl;

	char c = 'A';

	char* pChar = &c;

	void* pV = pChar;

	cout << "pV: " << pV << endl;

	cout << "pChar: " << pChar << endl;

	cout << "&pChar: " << &pChar << endl;

	cout << "*pChar: " << *pChar << endl;

	cout << "&c: " << &c << endl;

	int* pInt = (int*)pChar;

	//int* pInt = static_cast<int>(pChar);

	cout << "pInt: " << pInt << endl;
	cout << "*pInt: " << *pInt << endl;

	long long* pLongLong = (long long*)pChar;

	cout << "pLongLong: " << pLongLong << endl;
	cout << "*pLongLong: " << *pLongLong << endl;

	/**pLongLong = 42L;

	cout << "*pLongLong: " << *pLongLong << endl;*/

	a = 99;

	p = &a;

	int** pp = &p;

	cout << "p: " << p << endl;
	cout << "*p: " << *p << endl;
	cout << "&p: " << &p << endl;
	cout << "pp: " << pp << endl;
	cout << "&pp: " << &pp << endl;
	cout << "*pp: " << *pp << endl;
	cout << "**pp: " << **pp << endl;


	return EXIT_SUCCESS;
}

void tauscheMitZeiger(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}