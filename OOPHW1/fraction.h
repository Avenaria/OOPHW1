#pragma once
#include <iostream>
using namespace std;



class fraction
{
	int numerator1;
	int numerator2;
	int denominator1;
	int denominator2;

public:
	fraction(int x, int y, int c,int a) {
		numerator1 = x;
		denominator2 = y;
		numerator2 = c;
		denominator2 = a;
	}
	void addition( int x, int y, int c, int a) {
		int numerator = (x * a) + (c * y);
		int denominator = a * y;
		cout << "Сумма двух дробей равна  " << numerator<<"/"<< denominator;

	}

	void subtraction(int x, int y, int c, int a) {//вычитание
		int numerator = (x * a) - (c * y);
		int denominator = a * y;
		cout << "  " << numerator << "/" << denominator;

	}
	void multiplication(int x, int y, int c, int a) {//умножение
		int numerator = x * c;
		int denominator = y * a;
		cout << "Умножение= " << numerator << "/" << denominator;

	}
	void division(int x, int y, int c, int a) {
		int numerator = x * y;
		int denominator = c * a;
		cout << "деление = " << numerator << "/" << denominator;

	}

};

