
#include "pch.h"
#include <iostream>
#include "string"

using namespace std;

void inputClasses(string[], int);
void inputGrades(string [], int[], int[], int[], int[], int[], int);
void display(string, double, int, int);
int min(int[]);
int max(int[]);
double calcGrade(int[]);

int main()
{
	int const size = 5;
	string names[size];
	int class1[size];
	int class2[size];
	int class3[size];
	int class4[size];
	int class5[size];
	double grade = 0;
	
	inputClasses(names, size);
	inputGrades(names, class1, class2, class3, class4, class5, size);
	

	display(names[0], calcGrade(class1), max(class1), min (class1));
	display(names[1], calcGrade(class2), max(class2), min(class2));
	display(names[2], calcGrade(class3), max(class3), min(class3));
	display(names[3], calcGrade(class4), max(class4), min(class4));
	display(names[4], calcGrade(class5), max(class5), min(class5));


	

	system("pause");
	return 0;
}

void inputClasses(string names[], int size) {
	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			cout << "Enter name of your first class: ";
			cin >> names[i];
		}
		if (i == 1) {
			cout << "Enter name of your second class: ";
			cin >> names[i];
		}
		if (i == 2) {
			cout << "Enter name of your third class: ";
			cin >> names[i];
		}
		if (i == 3) {
			cout << "Enter name of your fourth class: ";
			cin >> names[i];
		}
		if (i == 4) {
			cout << "Enter name of your fifth class: ";
			cin >> names[i];
		}
	}
}

void inputGrades(string names[], int class1[], int class2[], int class3[], int class4[], int class5[], int size) {
	cout << "=========================================================" << endl;
	bool badInput = true;
	for (int i = 0; i < 5; i++) {
		
			cout << "Enter grade for test " << i + 1 << " in " << names[0] << " :";
			cin >> class1[i];

			if (class1[i] < 0 || class1[i] > 100) {
				cout << "Grade out of range enter again";
				cin >> class1[i];
			}
		}
	
	cout << "=========================================================" << endl;
	for (int i = 0; i < 5; i++) {
		
		cout << "Enter grade for test " << i + 1 << " in " << names[1] << " :";
		cin >> class2[i];
		if (class2[i] < 0 || class2[i] > 100) {
			cout << "Grade out of range enter again";
			cin >> class2[i];
		}
	}
	cout << "=========================================================" << endl;
	for (int i = 0; i < 5; i++) {
		
		cout << "Enter grade for test " << i + 1 << " in " << names[2] << " :";
		cin >> class3[i];
		if (class3[i] < 0 || class3[i] > 100) {
			cout << "Grade out of range enter again";
			cin >> class3[i];
		}
	}
	cout << "=========================================================" << endl;
	for (int i = 0; i < 5; i++) {
		
		cout << "Enter grade for test " << i + 1 << " in " << names[3] << " :";
		cin >> class4[i];
		if (class4[i] < 0 || class4[i] > 100) {
			cout << "Grade out of range enter again";
			cin >> class4[i];
		}
	}
	cout << "=========================================================" << endl;
	for (int i = 0; i < 5; i++) {
		
		cout << "Enter grade for test " << i +1 << " in " << names[4] << " :";
		cin >> class5[i];
		if (class5[i] < 0 || class5[i] > 100) {
			cout << "Grade out of range enter again";
			cin >> class5[i];
		}
	}
}
double calcGrade(int course[]) {
	
	double grade;
	grade = ((course[0] + course[1] + course[2] + course[3] + course[4]) / 5);
	return grade;
}
int min(int course[]) {
	int lowest = course[0];

	if (course[1] < lowest) {
		lowest = course[1];
	}
	if (course[2] < lowest) {
		lowest = course[2];
	}
	if (course[3] < lowest) {
		lowest = course[3];
	}
	if (course[4] < lowest) {
		lowest = course[4];
	}
	return lowest;
}
int max(int course[]) {
	int highest = course[0];

	if (course[1] > highest) {
		highest = course[1];
	}
	if (course[2] > highest) {
		highest = course[2];
	}
	if (course[3] > highest) {
		highest = course[3];
	}
	if (course[4] > highest) {
		highest = course[4];
	}
	return highest;
}

void display(string names, double grade, int highest, int lowest){

	
		cout << endl;
		cout << names << " INFORMATION" << endl;
		cout << "=====================================" << endl;
		cout << "Grade: " << grade << "%" << endl;
		cout << "High: " << highest << endl;
		cout << "Low: " << lowest << endl;
		cout << endl;
}