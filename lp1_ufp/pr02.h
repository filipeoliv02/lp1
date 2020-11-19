#ifndef pr02_h
#define pr02_h

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main_pr02(int argc, const char * argv);

/** 
	* Iteratively reads chars (from '0' to '9') and returns the complete decimal number
	* @return - decimal number
	* e.g. input: ('2', '1', '8', 'e') => output: 218
	* e.g. input: ('4', '3', 'e') => output: 43
 */
int readDigitsToInt(void);

/**
	* splits a number and prints each class in an ascending order
	* @param n - decimal value to be splited
	* e.g. input: (218); output => 8, 1, 2
*/
void printNumberClassesUnitsToUpperClasses(int n);

/**
	* splits a number and prints each class in a descending order
	* @param n - decimal value to be splited
	* e.g. input: (218); output => 2, 1, 8
*/
void printNumberClassesFromHigherToUnits(int n);

/**
	* iteratively multiplies two numbers by unfolding the multiplication into sums
	* @param a - num to be multiplied
	* @param b - multiplier
	* @return - multilpication result
	* e.g. input: (2, 5) => output: 10
*/
int multiplication (int a, int b);

/**
	* prints the multiplication table for a given number
	* @param num - input number
	* e.g. input: (2) => output: 2x1=2\n2x2=4\n2x3=6 ...
*/
void printMultiplicationTable (int num);

/**
	* prints inverted pyramid
	* @param width - pyramid's base width
	* e.g. input: (5); output: 1 2 3 4 5
	*														 2 3 4
	*														   3
*/
void printPyramid (int width);

/**
	* checks if a number is a product of three consecutive numbers
	* @param num - number to be checked
	* @return - true (0) or false (1)
	* e.g. input: (504) => output: is triangular 504 = 7x8x9
	* e.g. input: (1320) => output: is triangular 1320 = 10x11x12
*/
int isNumberTriangular (unsigned int num);

/**
	* Converts a decimal number to binary
	* @param num - decimal number
	* @return - binary converted number
	* e.g. input: (10); output: 1010
*/
int decimalToBinary (int num);

/**
	* Converts a binary number to decimal
	* @param bin - binary number
	* @return - decimal converted number
	* e.g. input: (1010); output: 10
*/
int binaryToDecimal (int bin);

/**
	* receives a float in format hh.mm and splits it into hours and minutes
	* @param f - hour in format hh.mm
	* input: (2.59); output: 2h, 59 min
*/
    void floatToHoursMinutes(float f);

#endif /* pr02_h */
