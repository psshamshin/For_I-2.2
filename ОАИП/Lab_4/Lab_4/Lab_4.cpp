#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
using namespace std;

int main() {
	system("chcp 1251>null");

	// =============================================== ЗАДАЧА 1 ==================
	/*
	const int k = 10;
	char a[k] = {
		'1', 'd', '3', '6', 'e',
		'k', 'z', '!', '=', '2'
	};

	int l = 0;

	char b[k];
	for (int i = 0; i < sizeof(a); i++) {
		if ((int(a[i]) <= 57) and (int(a[i]) >= 48)) {
			b[l] = a[i];
			l++;
		}
	}

	for (int i = 0; i < sizeof(a); i++) {
		if ((int(a[i]) > 57) or (int(a[i]) < 48)) {
			b[l] = a[i];
			l++;
		}
	}

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		cout << b[i]<< "\t";
	}
	*/
	// =============================================== ЗАДАЧА 2 ==================
	/*
	const int k = 10;
	char a[k] = {
		'1', 'd', '3', '6', 'e',
		'k', 'z', '!', '=', '2'
	};
	char b[k];
	for (int i = 0; i < sizeof(a); i++) {
		b[i] = a[k - i -1];
		cout << b[i] << "\t";
	}
	*/
	// =============================================== ЗАДАЧА 3 ==================
	/*/
	const int k = 10;
	int a[k] = {
		8,2,3,45,8,8,1,2,6,8
	};
	int s = 0;
	int max = 0;
	int maxn = 0;

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		for (int j = 0; j < sizeof(a) / sizeof(a[0]); j++) {
			if ((a[i] == a[j]) and (i != j)) {
				s++;
				if (s > max) {
					max = s;
					maxn = a[i];
				}
			}
		}
		s = 0;
	}
	cout << maxn << endl;
	*/
	// =============================================== ЗАДАЧА 4 ==================
	/*
	const int k = 10;
	int a[k] = {
		8,2,3,45,8,8,1,2,6,8
	};

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		int min_index = i;
		for (int j = i; j < sizeof(a) / sizeof(a[0]); j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}

		if (i != min_index) {
			int tmp = a[i];
			a[i] = a[min_index];
			a[min_index] = tmp;
		}
	}

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		cout << a[i] << "\t";
	}
	*/
	// =============================================== ЗАДАЧА 5 ==================
	/*
	const int k = 10;
	int a[k] = {
		8,2,3,45,8,8,1,2,6,8
	};

	int s = 0;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		for (int j = 0; j < sizeof(a) / sizeof(a[0]); j++) {
			if ((a[i] == a[j]) and (i != j)) {
				s++;
			}
		}
		if (s == 0) {
			cout << a[i] << "\t";
		}
		s = 0;
	}
	*/
	// =============================================== ЗАДАЧА 6 ==================
	/*
	const int k = 10;
	int a[k] = {
		1,2,3,45,8,8,1,2,6,8
	};
	int N;
	cout << "Введите N" << endl;
	cin >> N;
	for (int j = 0; j < N; j++) {
		int temp = a[0];
		for (int i = 0; i < sizeof(a) / sizeof(a[0]) - 1; i++) {
			a[i] = a[i + 1];
		}
		a[k - 1] = temp;
	}
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		cout << a[i] << "\t";
	}
	*/
	// =============================================== ЗАДАЧА 7 ==================
	/*
	const int k = 10;
	int a[k] = {
		1,2,3,45,8,8,1,2,6,8
	};
	int N;
	cout << "Введите N" << endl;
	cin >> N;
	for (int j = 0; j < N; j++) {
		int temp = a[k - 1];
		for (int i = k - 1; i > 0; i--) {
			a[i] = a[i - 1];
		}
		a[0] = temp;
	}

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		cout << a[i] << "\t";
	}
	*/
	// =============================================== ЗАДАЧА 8 ==================
	/*
	const int k = 10;
	int a[k] = {
		1,2,-3,45,-8,8,-1,2,-6,8
	};
	int s = 0;
	int b[k];
	for (int i = 0; i < sizeof(b) / sizeof(b[i]); i++) {
		if (a[i] < 0) {
			b[s] = a[i];
			s++;
		}
	}
	int s1 = 0;
	int c[k];
	for (int i = 0; i < sizeof(c) / sizeof(c[i]); i++) {
		if (a[i] > 0) {
			c[s1] = a[i];
			s1++;
		}
	}
	int tmp[k];
	for (int i = 0; i < s; i++) {
		tmp[i] = b[i];
	}
	for (int i = 0; i < s1; i++) {
		tmp[i+s] = c[i];
	}

	for (int i = 0; i < sizeof(tmp) / sizeof(tmp[i]); i++) {
		cout << tmp[i] << "\t" ;
	}
	*/
	// =============================================== ЗАДАЧА 9 ==================
	/*
	const int k = 10;
	char a[k] = {
		'1', 'd', '3', '6', 'e',
		'k', 'z', '!', '=', '2'
	};
	char temp[k];
	int s = 0;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		if ((int(a[i]) >= 48) and (int(a[i]) <= 57)) {
			temp[s] = a[i];
			s++;
			a[i] = 0;
		}
	}
	char temp1[k];
	int s1 = 0;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		if (a[i] != 0) {
			temp1[s1] = a[i];
			s1++;
		}
	}

	for (int i = 0; i < s; i++) {
		cout << temp[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < s1; i++) {
		cout << temp1[i] << "\t";
	}
	*/
	// =============================================== ЗАДАЧА 10 ==================
	/*
	const int k = 10;
	char a[k] = {
		'1', 'd', '3', '6', 'e',
		'e', '6', '3', 'd', '1'
	};
	bool f = true;
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
		if (a[i] != a[k - i - 1]) {
			f = false;
		}
	}
	if (f) {
		cout << "Симметричен" << endl;
	}
	else {
		cout << "Несимметричен" << endl;
	}
	*/

	return 0;
}
