// pancakeGlutton.cpp : Defines the entry point for the console application.
//

/*
Pancake Glutton Program (Training Exercise)

Objective: Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people.
Once the data has been entered, the program must analyze the data and output which person ate the most pancakes for breakfast.

*Modify the program so that it also outputs which person ate the least number of pancakes for breakfast
****Modify the program so that it outputs a list in order of number of pancakes of all 10 people

Requires:
variables, data types, and numerical operators
basic input/output
logic
loops
arrays

*/
#include "stdafx.h"
#include "iostream"
#include "tuple"
#include "vector"
#include "string"
#include <algorithm>

using namespace std;
typedef std::tuple<string, int> ptuple;

//Sorts a tuple bast positio <1>
bool mycompare(const ptuple &lhs, const ptuple &rhs) {
	return get<1>(lhs) > get<1>(rhs);
}

int main()
{
	std::vector <ptuple> v;
	string name;
	int pancakes;
	for (int i = 0; i < 3; i++) {
		cout << "What is your name? ";
		cin >> name;
		cout << "\nHow many pancakes did you eat? ";
		cin >> pancakes;
		v.push_back(ptuple(name, pancakes));
	}
	sort(v.begin(), v.end(), mycompare);
	for (vector<ptuple>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << get<0>(*iter) << "\t" << get<1>(*iter) << endl;
	}
	system("pause");
    return 0;

}

