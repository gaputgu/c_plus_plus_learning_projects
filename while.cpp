// while.cpp : Defines the entry point for the console application.
//
/*
While Program

Requires:
Variables. data types, and numerical operators.
Basic input/output
Logic
loops (for, while, for-while)

Objective:
Write a program that presents that continues to ask the user to enter any number other than 5 until the user enters the number 5, then tell the user
"Hey you weren't suppose to enter 5. and exit the program

*Modify: Modify the program so that after 10 iterations if the user still hasnt entered 5, it will tell the user "Wow, you're more patient than I am, you win" then exit.
**Modify: Modify the progra so that it asks the user to enter any number other than the number equal to the number of times they been asked to enter a number. The program will exit
if the value specify is equal to the number.

Requirements:
(1) The program shall ask the user to enter number.
(2) The program shall exit if the number entered is equal to the number of iterations.
(3) The program shall continue to ask until the number enetered is equal to the number of iterations.
(4) The program shall exit if the number of iterations equal to 10.



*/
#include "stdafx.h"
#include "iostream"



using namespace std;

int main()
{
	int val = 5;
	int input;
	int count = 0;

	do {
		if (count != 0) {
			val = count;
		}
		cout << "Please enter a number other than " << val <<": ";
		cin >> input;
		++count;
		if (count == 10) break;
	} while (val!=input);


	if (val == input) {
		cout << "Hey! You weren't suppose to enter that number!\n";
	}
	else {
		cout << "Wow! You're are more patient than I am, you win!\n";
	}
	
	system("pause");
    return 0;
}

