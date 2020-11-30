#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
#include <algorithm>
using namespace std;

int main() {

	/* реализую через встроенный класс
	 ======<<___STRING___>>======
	*/

	// ============= ЗАДАЧА 1 =============
	/*
	int k, counter;
	k = 0;
	counter = 0;
	string str = "10000   01011 01010  11111";

	for (int i = 0; i < str.size(); i++) {
		if ((str[i] == '1') or (str[i] == '0')) {
			k++;
		}
		else if (str[i] == ' ') {
			if (k == 5) {
				counter++;
			}
			k = 0;
		}
	}
	if (k == 5) counter++;
	cout << counter;
	return 0;
	*/

	// ============= ЗАДАЧА 2 =============
	/*
	int k, st_point;
	k = 0;
	st_point = 0;
	string str = "10000 0110101010 01011 1111011 010";
	int min = str.size();

	for (int i = 0; i < str.size(); i++) {
		if ((str[i] == '1') or (str[i] == '0')) {
			k++;
		}
		else {
			if (k < min) {
				min = k;
				st_point = i - min;
			}
			k = 0;
		}
	}
	if (k < min) {
		min = k;
		st_point = str.size() - min;
	}
	cout << min << "\t" << str.substr(st_point, min) << endl;
	*/

	// ============= ЗАДАЧА 3 =============
	/*
	int k = 0;
	int max = 0;
	string str = "10000 01101 01011 1111011 11111111111010";
	int min = str.size();

	for (int i = 0; i < str.size(); i++) {
		if ((str[i] == '1') or (str[i] == '0')) {
			k++;
		}
		else {
			if (k > max) max = k;
			k = 0;
		}
	}
	if (k > max) {
		max = k;
		k = 0;
	}
	cout << max << endl;
	*/

	// ============= ЗАДАЧА 4 =============
	/*
	int k, st_point;
	k = 0;
	st_point = 0;
	string str = "10000 0110101010 01011 1111011 010";
	int min = str.size();

	for (int i = 0; i < str.size(); i++) {
		if ((str[i] == '1') or (str[i] == '0')) {
			k++;
		}
		else {
			if (k % 2!=0) {
				st_point = i - k;
				cout << str.substr(st_point, k) << "\t";
			}
			k = 0;
		}
	}
	if (k % 2 != 0) {
		st_point = str.size() - k;
		cout << str.substr(st_point, k);
	}
	k = 0;
	*/

	// ============= ЗАДАЧА 5 =============
	/*
	int k, st_point;
	k = 0;
	int counter = 0;
	st_point = 0;
	string str = "10000 0110101010 01011 1111011 010";
	int min = str.size();

	cout << "Подстрока\t" << "кол-во '1'" << endl;
	cout << "==================================" << endl;
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] == '1') or (str[i] == '0')) {
			k++;
			if (str[i] == '1') counter++;
		}
		else {
			if (k % 2!=0) {
				st_point = i - k;
				cout << str.substr(st_point, k) << "\t\t" << counter << endl;
			}
			k = 0;
			counter = 0;
		}
	}
	if (k % 2 != 0) {
		st_point = str.size() - k;
		cout << str.substr(st_point, k) << "\t\t" << counter << endl;
	}
	k = 0;
	counter = 0;
	*/

	// ============= ЗАДАЧА 9 =============
	/*
	char str[] = "7 4 8 0 5 9 4";
	int k, x;
	k = 0;
	x = 0;
	for (int i = 0; i < sizeof(str) / sizeof(str[0]) - 1; i ++) {
		if (str[i] != ' ') {
			k++;
		}
	}
	int* a = new int[k];
	for (int i = 0; i < sizeof(str) / sizeof(str[0]) - 1; i += 2) {
		a[x] = (int)str[i] - 48;
		x++;
	}
	sort(a, a + k);
	cout << "-----------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << a[i] << " ";
	}
	delete[] a;
	*/

	// ============= ЗАДАЧА 6 =============
	/*
	string str = "a+f-%nj56s.-";
	int k = 0;
	for (int i = 0; i < str.size(); i++) {
		if (isdigit(str[i])) {
			k++;
		}
	}
	for (int i = 0; i < str.size(); i++) {
		if (isdigit(str[i])) {
			cout << str.substr(i, k);
			break;
		}
	}
	*/
	// ============= ЗАДАЧА 7 =============
	/*
	string str = "-5.-56.2s.-";
	int state = 0; int b = 0; int b1 = 0;
	int k = 0;
	for (int i = 0; i < str.size(); i++) {
		switch (state)
		{
		case 0:
			if (str[i] == '+' or str[i] == '-') {
				state = 1;
				b = i;
				break;
			}
			else if (isdigit(str[i]))
			{
				state = 2;
				b = i;
				break;
			}
		case 1:
			if (isdigit(str[i])) state = 2;
			else {
				state = 0;
				i--;
			}
			break;
		case 2:
			if (str[i] == '.') state = 3;
			else if (!isdigit(str[i])) {
				state = 0;
				i--;
			}
			break;
		case 3:
			if (isdigit(str[i])) state = 4;
			else {
				state = 0;
				i--;
			}
			break;
		case 4:
			if (!isdigit(str[i])) state = 5;
			b1 = i;
			break;
		default:
			break;
		}
		k = i;
	}
	if (state == 5 or (state == 4 && k == str.size() - 1)) {
		cout << str.substr(b, b1 - b);
	}
	*/

	// ============= ЗАДАЧА 8 =============
	/*
	string str = "10.08-1.0f2+";
	int state = 0; int b = 0; int b1 = 0;
	int k = 0;
	for (int i = 0; i < str.size(); i++) {
		switch (state)
		{
		case 0:
			if (str[i] == '+' or str[i] == '-') {
				state = 1;
				b = i;
				break;
			}
			else if (isdigit(str[i]))
			{
				state = 2;
				b = i;
				break;
			}
		case 1:
			if (isdigit(str[i])) state = 2;
			else {
				state = 0;
				i--;
			}
			break;
		case 2:
			if (str[i] == '.') state = 3;
			else if (!isdigit(str[i])) {
				state = 0;
				i--;
			}
			break;
		case 3:
			if (isdigit(str[i])) state = 4;
			else {
				state = 0;
				i--;
			}
			break;
		case 4:
			if (str[i] == 'f') {
				state = 5;
				b1 = i;
			}
			else if (!isdigit(str[i])) {
				state = 0;
				i--;
			}
			break;
		default:
			break;
		}
		k = i;
	}
	if (state == 5 or (state == 4 && k == str.size() - 1)) {
		cout << str.substr(b, b1 - b + 1);
	}
	*/

	// ============= ЗАДАЧА 10 =============
	/*
	char str[] = "7 4 8 0 5 9 4";
	int k, x, f;
	k = 0;
	x = 0;
	f = 0;
	for (int i = 0; i < sizeof(str) / sizeof(str[0]) - 1; i ++) {
		if ((str[i] != ' ') and ((int)str[i] % 2 == 0)) {
			k++;
		}
	}
	int* a = new int[k];
	for (int i = 0; i < sizeof(str) / sizeof(str[0]) - 1; i += 2) {
		f = (int)str[i] - 48;
		if (f % 2 == 0) {
			a[x] = (int)str[i] - 48;
			x++;
		}
	}
	cout << "-----------------" << endl;
	for (int i = 0; i < k; i++) {
		cout << a[i] << " ";
	}
	delete[] a;
	*/

	// ============= ЗАДАЧА 11 =============
	/*
	int k, st_point, x, c;
	k = 0; x = 0; c = 1;
	st_point = 0;
	string str = "i tried so hard and got so far but in the end it's doesn't even matter";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			c++;
		}
	}

	string *a = new string[c];

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ' ') {
			k++;
		}
		else {
			a[x] = str.substr(st_point, k);
			st_point = i + 1;
			x++;
			k = 0;
		}
	}
	if (str[str.size()-1] != ' ') {
		a[x] = str.substr(st_point, k);
	}
	std::sort(a, a+c);
	for (int i = 0; i < c; i++) {
		cout << a[i] << endl;
	}
	*/

	return 0;
}
