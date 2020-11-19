#ifndef pr04_h
#define pr04_h

#include <stdio.h>
#include <string.h>

#define MAXCOLS100 100

/**
* recursively raises b to the power of e
* @param b - base
* @param e - exponent
* @returns b^e
* e.g. input: (2, 5); output: 32
* e.g. input: (10, 1); output: 10
* e.g. input: (3, 0); output: 1
*/
double pow_recursive(int b, int e);

/**
* recursively prints n parts of the hangman 
* @param level - number of members to print
* e.g. input: (6); output: \O/
							|
						   / \
* e.g. input: (4); output: \O/
							|
*/
void print_hangman_recursive(int level);

/**
* delete repteades characters in a given string
* @param v - string
* @return trimmed string
* e.g. input: ("abcadbf"); output: "abcdf"
* e.g. input: ("aa   bb"); output: "a b"
*/
char* delete_repeated_chars(char s[]);

/**
* shift all the characters in a given string
* @param s - string
* @param n - number of shifts. if n<0 shift left; if n>0 shift right
* @return shifted string
* e.g. input: ("hello",  2); output: "lohel"
* e.g. input: ("hello", -1); output: "elloh"
*/
char* shift_n(char s[], int n);

/**
* replace all the ocurrences of a given substring in a given string
* @param str - main string
* @param sub - substring to be replaced
* @param rep - replacement substring
* @return str after replacement
* e.g. input: ("olaxxxmeuxxxmundo", "xxx", "??"); output: "ola??meu??mundo" 
*/
char* replace_sub2rep(char str[], char sub[], char rep[]);

/**
* counts the number of words in a given string
* @param str - string
* @return number of words in str
* e.g. input: ("hello hello world"); output: 3
* e.g. input: ("o um dois tres   quatro"); output: 6
*/
int count_words_string (char str[]);

/**
* find the greatest word in a given string
* @param str - string
* @return lenght of the greatest word
* e.g. input: ("hello hello world"); output: 5
* e.g. input: ("o um dois tresquatro"); output: 10
*/
int greatest_word_string (char str[]);

/**
* multiply matrix by scalar
* @param m - matrix to be multiplied
* @param lines - number of matrix lines
* @param scalar - multiplier
* e.g. input: ([[5, 8], [4, 3]], 3); output: [[15, 24], [12, 9]]
*/
void multiply_matrix_by_scalar (int m[], int lines, int columns, int scalar);

/**
* multiply two matrices
* @param mA100 - matrix A
* @param mB100 - matrix B
* @param mC100 - matrix to store the result
* @param linesA - number of lines in matrix A
* @param columnsB - number of columns in matrix B
*/
void multiply_matrixesNxMAXCOLS100(int mA100[][MAXCOLS100], int mB100[][MAXCOLS100], int mC100[][MAXCOLS100], int linesA, int columnsB);


int main_pr04(int argc, const char *argv);

#endif