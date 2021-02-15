#include <string>
#include <iostream>
#include <fstream>
using namespace std;

//comparison between two dates
bool con_date(string date1, string date2) {
	bool flag = false;
	int d1, d2, m1, m2, y1, y2;
	d1 = atoi(date1.substr(0, date1.find(':')).c_str());
	d2 = atoi(date2.substr(0, date2.find(':')).c_str());
	m1 = atoi(date1.substr(3, date1.find(':')).c_str());
	m2 = atoi(date2.substr(3, date2.find(':')).c_str());
	y1 = atoi(date1.substr(6, date1.length()).c_str());
	y2 = atoi(date2.substr(6, date1.length()).c_str());
	if (y1 - y2 > 0) flag = true;
	else {
		if ((m1 - m2 > 0) and (d1 - d2 > 0)) flag = true;
		else flag = false;
	}
	return flag;
}

int main()
{
	setlocale(LC_ALL, "ru");
	string str = "";
	int number = 0;
	string current_date = "";
	cout << "Текущая дата(дд:мм:гг)" << endl;
	cin >> current_date;
	cout << "====== Данные из файла ========" << endl;
	/* ===== классы для потоков =====
	 fstream
	 ifstream - input file stream
	 ofstream - output file stream
	   ============================== */

	struct strc {
		string name;
		int num;
		int cost;
		string date;
	};
	strc data[5];
	
	// ==== чтение ====
	ifstream fin;
	fin.open("input.txt");
	if (!fin.is_open()) {
		cout << "Ошибка" << endl;
	}
	else {
		fin >> number;
		for (int i = 0; i < number; i++) {
			fin >> data[i].name >> data[i].num 
				>> data[i].cost >> data[i].date;
		}
	}
	for (int i = 0; i < number; i++) {
		cout << data[i].name << ' ' << data[i].num 
			<< ' ' << data[i].cost << ' ' << data[i].date << endl;
	}
	fin.close();

	// ==== запись ====
	ofstream fout;
	fout.open("output.txt");
	if (!fout.is_open())
	{
		cout << "Ошибка" << endl;
	}
	else
	{
		cout << "--------------" << endl;
		for (int i = 0; i < number; i++) {
			if (con_date(current_date, data[i].date) and 
				(data[i].cost * data[i].num > 1000000)) {
				cout << data[i].name << " В сумме больше млн" << endl;
				fout << data[i].name << " В сумме больше млн:" 
					<< " " << data[i].cost* data[i].num << endl;
			}
		}
	}
	fout.close();
	
	return 0;
}

