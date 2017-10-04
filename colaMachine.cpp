// colaMachine.cpp : Defines the entry point for the console application.
//

/*
Objective: Write a program that presents the user w/ a choice of your 5 favorite beverages

Requires:
Variables, data types, and numerical operators
basic input/output
logic if statements

Extra: Use switch statemetns
Extra 2: Modify the program so that if the user enters a choice other 1-5 then it will output an "Error. choice was not valid, here is your money back."

Requirements:
The program shall present a user with a choice of 5 favorite beverages.
The program shall allow a user to select coke
The program shall allow a user to select pepsi
The program shall allow a user to select dr. pepper
The program shall allow a user to select mountain dew
The program shall allow a user to select sprite.

*/

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;


int main()
{
	int val;
	cout << "Welcome! Please a choice of beverage from the list below:\n1-Coke\n2-Pepsi\n3-Dr. Pepper\n4-Mountain Dew\n5-Sprite\nEnter Choice: ";
	cin >> val;
	switch (val) {
		case 1: cout << "\nEnjoy your Coke!\n\n";
		break;
		case 2: cout << "\nEnjoy your Pepsi!\n\n";
		break;
		case 3: cout << "\nEnjoy your Dr. Pepper!\n\n";
		break;
		case 4: cout << "\nEnjoy your Mountain Dew!\n\n";
		break;
		case 5: cout << "\nEnjoy your Sprite!\n\n";
		break; 
		default: cout << "\nError. Choice was not valid, here is your money back.\n\n";
		break;
	}
	cout << "Thank you for your business, please come again!\n";
	system("pause");
    return 0;
}

