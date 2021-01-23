#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
#include <string> 
#include <algorithm>
#include <ctime>

using namespace std;
int main()
{
	//==== array of strings of clients
	string name_team[2] = { "ZKNO-TEAM", "LOL" };
	string name[5] = { "Shamshin Pasha Sergeevich",
		"Novikov Sergey Alekseevich", "Demin Atrem Aleksandrovich" ,
	"Kalimeev Maksim Sergeevich", "Minevtsev Dmitriy Olegovich" };
	int age[5] = { 17, 17, 16, 15, 17 };
	int num[5] = { 7, 13, 10, 18, 15 };
	double height[5] = { 176, 190, 185, 170, 187 };
	double weight[5] = { 59,70,70,50,50 };

	struct strc {
		string name;
		string name_team;
		int num;
		int age;
		double height;
		double weight;
	};

	strc data[5];
	for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
		data[i].num = num[i];
		data[i].name = name[i];
		data[i].height = height[i];
		data[i].weight = weight[i];
		data[i].age = age[i];
	}
	data[0].name_team = name_team[0];
	data[1].name_team = name_team[1];
	data[2].name_team = name_team[0];
	data[3].name_team = name_team[0];
	data[4].name_team = name_team[1];
	double min = 1000;
	int min_team = 0;
	for (int i = 0; i < sizeof(name_team) / sizeof(name_team[0]); i++) {
		double average_age = 0;
		int counter = 0;
		for (int j = 0; j < sizeof(data) / sizeof(data[0]); j++) {
			if (data[j].name_team == name_team[i]) {
				counter++;
				average_age += data[j].age;
			}
		}
		if (min > average_age / counter) {
			min = average_age / counter;
			min_team = i;
		}
	}
	cout << min << " - " << name_team[min_team] << endl;
	for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
		if (data[i].name_team == name_team[min_team]) {
			cout << data[i].name << " age:" << data[i].age << " h:" << data[i].height 
				<< " w:" << data[i].weight << data[i].num << endl;
		}
	}
	return 0;
}
