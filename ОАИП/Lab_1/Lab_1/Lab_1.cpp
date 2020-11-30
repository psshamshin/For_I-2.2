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

}


