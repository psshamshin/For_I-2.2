#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

long double fact(int n) {
	if (n == 1) {
		return 1;
	}
	if (n > 1) {
		return n * fact(n - 1);
	}
}



int main()
{
	//Смена кодировки консоли//
	system("chcp 1251>null");

	/* ========= ВВОД ПЕРЕМЕННЫХ ЕСЛИ НАДО ===========
	double x, y, z, h, a, b, c;

	cout << "Введи x: ";
	cin >> x;
	cout << "Введи y: ";
	cin >> y;
	cout << "Введи z: ";
	cin >> z;
	*/


	//================ПАРА №2===============АЛГОРИТМИЗАЦИЯ========================

	double i, x, y, z, h, a, b, c, f, s, n;
	s = 0;
	int k = 0;
	/*
	int k;

	cout << "Введи x: ";
	cin >> x;
	cout << "Введи y: ";
	cin >> y;
	cout << "Введи f(x) :1 - sh(x), 2 - x^2, 3 - exp(x) ";
	cin >> k;

	switch (k) {
	case 1: f = sinh(x); break;
	case 2: f = pow(x, 2); break;
	case 3: f = exp(x); break;
	default: cout << "Не выбрана ф-ия"; return 1;
	}
	*/



	/* ============ #1 ============
	a = x * y;
	if (a > 0) {
		s = pow(f + y, 2) - pow(fabs(f), 1/3.);
	}
	else if (a < 0) {
		s = pow(f + y, 2) + sin(x);
	}
	else if (a == 0) {
		s = pow(f + y, 2) + pow(y, 3);
	}
	*/

	/* ============ #2 ============
	a = x / y;
	if (a > 0) {
		s = log(f) + pow(fabs(f), 1/3.);
	}
	else if (a < 0) {
		s = log(f/y) * pow(x+y,3);
	}
	else {
		s = pow(pow(f,2)+y, 3);
	}
	*/

	/* ============ #3 ============

	a = x - y;
	if (a == 0) {
		s = pow(f,2) + pow(y, 1/3.) + sin(y);
	}
	else if (a > 0) {
		s = pow(f - y, 2) + log(x);
	}
	else if (a < 0) {
		s = pow(y - f, 2) + tan(y);
	}
	*/

	/* ============ #4 ============

	if (x > y) {
		s = pow(fabs(f-y), 1/3.);
	}
	else if (y > x) {
		s = pow(y - f,3) + cos(f);
	}
	else if (x == y) {
		s = pow(y + f,2) + pow(x,3);
	}
	*/

	/* ============ #5 ============
	if (x > y) {
		s = y * pow(f,1/2.) + 3 * sin(x);
	}
	else if (x < y) {
		s = x * pow(fabs(x),1/2.);
	}
	*/

	/* ============= #6 =============
	a = x * y;
	if ((a > 0.5)&&(a < 10)) {
		s = y * pow(f, 1 / 2.) + 3 * sin(x);
	}
	else if (x < y) {
		s = x * pow(fabs(x), 1 / 2.);
	}
	*/

}


