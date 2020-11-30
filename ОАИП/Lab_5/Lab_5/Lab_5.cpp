#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
using namespace std;

int main() {
	system("chcp 1251>null");


	//========================================== ДИНАМИЧЕСКАЯ ПАМЯТЬ ==================
	/* указатель - переменная, содержащая указание на адрес другой переменной.
	Вместо создания новой переменной можно указывать на ячейку памяти в которой
	лежит занчение а
	==================================================================================

	Возможности динамической памяти - можно сделать чтобы два указателя ссылались на
	один и тот же адресс в памяти, в котором хранится значение а ,можно по адресу
	обращаться к переменной и подменять ее занчения без непосредственного взаимодействия
	с ней. И если мы запросим первую ссылку и разыменуем, то получим уже новое значение

	int a = 50;
	int *pa = &a;
	cout << pa << endl;
	cout << *pa << endl;

	Префикс p - pointer
	* - переменная типа указатель
	& - оператор взятия адреса
	*/
	/*

	int m, n, k = 0;
	bool f = true;
	cout << "Введите длину массива" << endl << " кол-во строк N:" << "\t";
	cin >> n;
	cout << " кол-во столбцов M:" << "\t";
	cin >> m;
	cout << "Введите k принадлеж. [n,m] " << "\t";
	cin >> k;
	cout << "====================" << endl << "Введите матрицу" << endl;
	int *b = new int[m];
	int **a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if ((j == (k-1)) and (a[i][j] != 0)) {
				f = false;
			}
		}
	}
	cout << "========" << endl << "Массив B" << endl << "========" << endl;
	for (int i = 0; i < m; i++) {
		if ((i == (k-1)) and f) {
			b[i] = 0;
		}
		else {
			b[i] = 1;
		}
		cout << b[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		delete [] a[i];
	}
	delete [] a;
	delete [] b;
	*/

	// ========================== ЗАДАЧА 2 ==========================
	/*
	int m, n, k = 0;
	bool f = true;
	cout << "Введите длину массива" << endl << " кол-во строк N:" << "\t";
	cin >> n;
	cout << " кол-во столбцов M:" << "\t";
	cin >> m;
	cout << "Введите k-номер столбца " << "\t";
	cin >> k;
	cout << "====================" << endl << "Введите матрицу" << endl;
	int *b = new int[m];
	int **a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((j == k-1) and (a[i][j] >= a[i-1][j])) {
				f = false;
			}
		}
	}
	cout << "========" << endl << "Массив B" << endl << "========" << endl;
	for (int i = 0; i < m; i++) {
		if ((i == (k-1)) and f) {
			b[i] = 1;
		}
		else {
			b[i] = 0;
		}
		cout << b[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		delete [] a[i];
	}
	delete [] a;
	delete [] b;
	*/


	// ========================== ЗАДАЧА 3 ==========================
	/*
	int m, n, k = 0;
	bool f = true;
	cout << "Введите длину массива" << endl << " кол-во строк N:" << "\t";
	cin >> n;
	cout << " кол-во столбцов M:" << "\t";
	cin >> m;
	cout << "Введите k-номер столбца " << "\t";
	cin >> k;
	cout << "====================" << endl << "Введите матрицу" << endl;
	int* b = new int[m];
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i][k-1] != a[n - i - 1][k-1]) {
			f = false;
		}
	}
	cout << "========" << endl << "Массив B" << endl << "========" << endl;
	for (int i = 0; i < m; i++) {
		if ((i == (k - 1)) and f) {
			b[i] = 1;
		}
		else {
			b[i] = 0;
		}
		cout << b[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;
	delete[] b;
	*/

	// ========================== ЗАДАЧА 4 ==========================

	int m, n, s = 0;
	bool f = true;
	cout << "Введите длину массива" << endl << " кол-во строк N:" << "\t";
	cin >> n;
	cout << " кол-во столбцов M:" << "\t";
	cin >> m;
	cout << "====================" << endl << "Введите матрицу" << endl;
	int* sum = new int[m];
	for (int i = 0; i < m; i++) {
		sum[i] = 0;
	}
	int* b = new int[m];
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			sum[j] += a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] > sum[j] - a[i][j]) {
				s += 1;
			}
		}
	}
	cout << "========" << endl << "ОТВЕТ" << endl << "========" << endl;
	cout << s << endl;
	cout << endl;
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;
	delete[] b;
	delete[] sum;
	return 0;
}
