#include <iostream>
#include <iomanip>
#include <string>
#include "functions.h"
using namespace std;

const int col = 7;
const int row = 10;

void getNameOfDay() {

	string daysOfWeek[] = { "_Monday_", "_Tuesday_", "_Wednesday_",
			"_Thursday_", "_Friday_", "_Saturday_", "_Sunday_" };

	createList(daysOfWeek);
}
void createList(string daysOfWeek[]) {

	string lecName, userName;
	string list [col][row];

	cout << "Please enter your name:";
	cin >> userName;

	cout << "Please enter your lecture name.If they are done enter 'done'."
			<< endl;

	for (int i = 0; i < col; ++i) {
		cout << daysOfWeek[i] << endl;
		for (int j = 0; j < row; j++) {
			cout << "Lecture Name:";
			cin >> lecName;
			if (lecName == "done")
				break;
			list[i][j] = lecName;
		}
	}




	cout << setw(40) << userName << "'s Weekly To Do List" << endl;

	for (int i = 0; i < col; ++i)
		cout << setw(25) << left << daysOfWeek[i];
	cout << endl;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; j++) {
			cout << setw(25) << left << list[j][i];
		}
		cout << endl;
	}
}


