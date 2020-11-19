//
//  pr01.h
//  lp1_ufp
//
//  Created by Rui on 22/09/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef pr01_h
#define pr01_h

#include <stdio.h>

/**
	* print the ascii value of a given character
	* output -> readCharPrintAscii('a') : 97
	@param c - char to be converted 
*/
void readCharPrintAscii(char c);

/**
	* division of two integer values
	* output -> readIntsDivisionFloat(10, 3) : 3.33
	@param a - dividend
	@param b - divisor
	@return - (float) a / b
*/
float readIntsDivisionFloat(int a, int b);

/**
	* prints ascii table letters from 'a' to 'z' and from 'A' to 'Z'
	* output: |       A       |       65      ||      a       |       97      |
			  |       B       |       66      ||      b       |       98      |
			  ...
*/
void printAsciiTableLetters(void);

/**
	* iteratively checks if a user input char is a digit
	* output: '0' is a digit; 'a' is not a digit
*/
void printDigitOrNot(void);

/**
	* counts how many times a given char appears in an
	* iteratively user entered series of chars
	@param c - char to count
	@return - number of occurrences
*/
int countInsertedChar(char c);

/**
	* iteratively counts characters, digits, white spaces and special characters
	* in a user input stream
*/
void parseCountInStream(void);

/**
	* prints all prime numbers between min and max
	* output -> printPrimeNumbers(0, 10) : 2, 3, 5, 7
	@param min
	@param max
*/
void printPrimeNumbers(int min, int max);

int main_pr01(int argc, const char *argv[]);

#endif /* pr01.h */
