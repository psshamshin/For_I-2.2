#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
#include <iomanip>
using namespace std;

long double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1; 
	else 
		return N * fact(N - 1); 
}

double Y(double x) {
	return pow(1+x, 1/3.);
}

double S(double x, double n) {
	double sum = 0;
	int koef = 2;
	int last_number = 2;
	for (int k = 0; k < n; k++) {
		
		if (k == 0) {
			sum += 1;
		}
		else if (k == 1) {
			sum += (x / 3.);
		}
		else if (k == 2) {
			sum -= pow(x, 2) / 9.;
		}
		
		else {
			
			sum += pow(-1, k - 1) * koef * (3 * k - 4) / fact(k) / pow(3, k) * pow(x, k);
			last_number += 3;
			koef *= last_number;
			
		}
		
	}
	return sum;
}

int main()
{
	cout << "x" << setw(15) << "Y(x)" << setw(15) << "S(x)" << setw(20) << "iterations" 
		<< endl << "--------------------------------------------------" << endl;

	double epsilon = pow(10, -3);
	
	
	for (double a = 0;a <= 0.8; a += 0.1) {
		//cout << a << endl;
		a = round(a * 100) / 100;
		
		for (int i = 1; ;i++) {
			
			if (fabs(Y(a) - S(a, i)) <= epsilon) {
				cout << a << setw(15) << Y(a) << setw(15) << S(a, i) << setw(10) << i << endl;
				break;
			}
		}
	}
	
}
