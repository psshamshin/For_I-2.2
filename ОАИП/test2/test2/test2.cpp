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

	/* ============ ЗАДАЧА 1 ============
	double a, b, c, h, x, y, z, s;
	x = 14.26;
	y = -1.22;
	z = 3.5 * pow(10, -2);
	a = 2 * cos(x - 2/3.);
	b = 0.5 + pow(sin(y), 2);
	c = 1 + (pow(z, 2) / (3 - (pow(z, 2) / 5)));
	h = a / b * c;
	cout << h << endl;
	*/



	/*============ ЗАДАЧА 2 ============
	double x, y, z, s;
	x = -4.5;
	y = 0.75 * pow(10,-4);
	z = -0.845*pow(10,2);
	s = pow((9 + pow(x - y, 2)), 1/3.) / (pow(x, 2) + pow(y, 2) + 2) - exp(fabs(x - y)) * pow(tan(z), 3);
	cout << s << endl;
	*/


	/*============ ЗАДАЧА 3 ============
	double x, y, z, s;
	x = 3.74 * pow(10, -2);
	y = -0.825;
	z = 0.16 * pow(10, 2);
	s = (1 + pow(sin(x + y), 2)) * pow(x, fabs(y)) / fabs(x - (2 * y / (1 + pow(x * y, 2)))) + pow(cos(atan(1.0/z)), 2);
	cout << s << endl;
	*/

	/*============ ЗАДАЧА 4 ============
	double x, y, z, s;
	x = 0.4 * pow(10, 4);
	y = -0.875;
	z = -0.475 * pow(10, -3);
	s = pow(fabs(cos(x) - cos(y)), 1 + 2 * pow(sin(y), 2)) * (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
	cout << s << endl;
	*/


	/*============ ЗАДАЧА 5 ============
	double x, y, z, s;
	x = -15.246;
	y = 4.642 * pow(10, -2);
	z = 21;
	s = log(pow(y, -sqrt(fabs(x)))) * (x - y / 2) + pow(sin(atan(z)), 2);
	cout << s << endl;
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

	// ================ ПАРА №3 ===============АЛГОРИТМИЗАЦИЯ========================
	/*
	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;

	x = a;
	n = 1;
	*/

	// ============= ЗАДАЧА 1 =============
	/*
	cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "x" << "\t\t" << "s(x) \t\t" << "y(x)" << endl;
	while ((n <= 160)&&(x <= b)) {
		s = pow(-1, n) * pow(x, 2 * n + 1) / fact(2 * n + 1);
		cout << x << "\t\t" << s << "\t\t" << exp(x)+exp(-x) / 2. << endl;

		n++;
		x += (b-a)/10.;
	}
	cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
	*/


	// ============= ЗАДАЧА 2 =============
	/*
	cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << "x" << "\t\t" << "s(x) \t\t" << "y(x)" << endl;
	while ((n <= 100) && (x <= b)) {
		s = pow(x, 2*n) / fact(2 * n);
		cout << x << "\t\t" << s << "\t\t" << exp(x)+exp(-x) / 2. << endl;

		n++;
		x += (b - a) / 10.;
	}
	cout << "- - - - - - - - - - - - - - - - - - - - -" << endl;
	*/

	
}

