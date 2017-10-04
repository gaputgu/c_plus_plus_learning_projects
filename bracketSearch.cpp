// bracketSearch.cpp : Defines the entry point for the console application.
//


/*
Bracket Search C++ Training Module

Objective:
Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number. If the user guesses too high, or too low
the the program should output too high or too low accordingly. The Program must let the user continue to guess correctly guess the number

Modify 1: modify the program to output how many guesses it took the user to correctly guess the right number
Modify 2: modify the program so that instead of the user guessing a number, the computer pgoram came p with, the comuter guesses the number that the user secretly
decided. The user must tell the computer whether it guess it too high or too low.
Modify 3: Modify the pgroam so that no matter what number the user thinks, the computer can guess it in 7 or less guesses. 

Requirement 1: The program shall calculate a random number between 1 through 100.
Requirement 2: The program shall then ask the user to guess the number.
Requirement 3: The program shall tell user if the guessed number is too high.
Requirement 4: The program shall tell user if the guessed number is too low.
Requirement 5: The program shall tell user if the number has been guessed correctly.

Requirement 6: The program shall tell the user how many guesses it took.
Requirement 7: The program shall ask if the user wants to guess or the computer should guess
Requirement 8: The program shall have the computer guess the number
Requirement 9: The program shall have the user specify if the number is higher than the guessed number.
Requirement 10: The program shall have the user specify if the number is lower than the guessed number.


*/
#include "stdafx.h"
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm>    // std::max/min
#include <iostream>

using namespace std;



int main()
{
	int secret, guessed,count;
	/*Specifies the seed for random number generator, based on time.*/
	srand(time(NULL));
	count = 1;
	cout <<  "Would you like to guess the number? (Y/N) "; /*Requirment 7*/
	char response;
	cin >> response;
	switch (response) {
	case 'Y':
		/*Sets the random number (1-100) */
		secret = rand() % 100 + 1; /*Requirement 1*/
		do {
			printf("\nGuess the number (1 to 100): "); /*Requirement 2*/
			scanf_s("%d", &guessed);
			if (secret > guessed) puts("The secret number is higher.\n"); /*Requirement 3*/
			else if (secret < guessed) puts("The secret number is lower.\n"); /*Requirement 4*/
			count++;
		} while (secret != guessed);

		printf("Congratulations! It took you %d guesses!\n", count); /* Requirement 5 & 6*/

	case 'N':
		int val, min_val, max_val;
		val = 50;
		min_val = 0;
		max_val = 100;
		char answer;
		char highlow;

		printf("\nPlease select a number (1-100) so I can guess. Don't CHEAT!\n");
		do {
			printf("Is the number %d?(y/n)\n", val);
			cin >> answer;
			if (answer == 'n' || answer == 'N') {
				printf("Is the number higher or lower?(h/l)\n");
				cin >> highlow;
				if (highlow == 'h' || highlow == 'H') {

					min_val = max(val, min_val);
				}	
				else if (highlow == 'l' || highlow == 'L') {
					max_val = min(val, max_val);
				}
				else {
					printf("NO FAIR!! You're cheating! I QUIT!!!\n");
				}
				val = (max_val + min_val) / 2;
				count++;
			}
		} while (answer != 'y' && answer != 'Y');
		printf("Awesome! It took me %d guess(s)!\n", count); /* Requirement 11*/
	}
	system("pause");
    return 0;
}

