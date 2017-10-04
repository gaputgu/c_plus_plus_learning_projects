// gradingProgram.cpp : Defines the entry point for the console application.
//

/*
This program is meant for learning purposes.

Requires:
variables, data types, and numerical operators
basic input/output
logic

Objective: Write a program that allows the user to enter the grade scored in a programming class (0-100),
if the user scored a 100 then notify the user that they got a perfect score.

Requirements: 
The program shall allow a user to enter a grade score.
	-The graded score must be a value betwen 0 and 100
	-The grade score shall have a name related to it.
The program shall notify the user if they got a perfect score.

Modify the program so that if the user scored a 90-100 it informs the user that they scored an A
Modify the program so that it will notify the user of their letter grade.
*/
#include "stdafx.h"

#include "iostream"
#include "string"
#include "sstream"

using namespace std;


int main()
{
	string myStr;
	string name;
	float grade;

	cout << "Enter name of student:  ";
	getline(cin, myStr);
	stringstream(myStr) >> name;
	cout << "\nEnter student's grade: ";
	getline(cin, myStr);
	stringstream(myStr) >> grade;

	if (grade == 100) {
		cout << "Attention Class! Congratulations to  " << name << " for getting a perfect score!!\n";
	}

	if (grade > 90 ) {
		cout << "Grade score for " << name << " is an A.\n";
	}
	else if (grade > 80 & grade < 90) {
		cout << "Grade score for " << name << " is a B.\n";
	}
	else if (grade > 70 & grade < 80) {
		cout << "Grade score for " << name << " is a C.\n";
	}
	else if (grade > 60 & grade < 70) {
		cout << "Grade score for " << name << " is a D.\n";
	}
	else {
		cout << "Grade score for " << name << " is a F.\n";
	}

	system("pause");
    return 0;
}

