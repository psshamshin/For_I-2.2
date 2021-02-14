#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
#include <algorithm>
using namespace std;

// УПРАЖНЕНИЕ №1
/*
double Sum(int i, double A[], int n)
{
	if (i == n - 1)
		return A[i];
	else
		return A[i] + Sum(i + 1, A, n);

}
int main()
{
	double array[5] = { 2,3,1,2,3 };
	double s = 0;
	cout << Sum(0, array, 5) << endl << "---" << endl;
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		s += array[i];
	}
	cout << s << endl;
}
*/

//УПРАЖНЕНИЕ №2
/*
double Pro(int i, double A[], int n)
{
	if (i == n - 1)
		return A[i];
	else
		return A[i] * Pro(i + 1, A, n);

}
int main()
{
	double array[5] = { 2,3,1,2,3 };
	double s = 1;
	cout<< Pro(0, array, 5)<< endl<< "---" << endl;
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		s *= array[i];
	}
	cout << s << endl;
}
*/

//УПРАЖНЕНИЕ №3
int Count(int n)
{
	if (n / 10 != 0) return 1 + Count(n / 10);
	else return 1;
}

int main()
{
	int number = 123456;
    cout << Count(number) << endl;
	//cout << s << endl;

	int s = 0;
	while (number > 0) {
		s++;
		number = number / 10;
	}
	cout << s;
}
