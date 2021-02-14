#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
#include <algorithm>
using namespace std;

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
