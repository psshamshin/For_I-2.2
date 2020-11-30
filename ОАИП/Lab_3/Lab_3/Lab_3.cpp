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


