#ifndef pr05_h
#define pr05_h

#include <math.h>
#include <stdio.h>

#define ALPHABET_LETTERS 26
int main_pr05(int argc, char const *argv[]);

void swap(int x, int y);

/**
 * swap values of x and y
 * @param px - pointer to x
 * @param py - pointer to y
 */

void swap_pxy(int *px, int *py);
/**
 * swap two positions of a given double array, using pointer notation
 * @param pi - pointer to the first position of the double array
 * @param pos1 - position 1
 * @param pos2 - position 2
 * @return array after swap
 * i.e. input: ((1, 2, 3, 4), 0, 2); output: (3, 2, 1, 4)
 */
double *swap_double_array_ptr(double *pi, int pos1, int pos2);

/**
 * calc the roots of a 2º grade polinomial ax^2 + bx + c
 * @param a - retreived from ax^2
 * @param b - retreived from bx
 * @param c - retreived from c
 * @param r1 - first root
 * @param r2 - second root
 * i.e. input: (2, -14, 20, &r1, &r2); output: r1=5.00, r2=2.00
 */
void calc_roots(int a, int b, int c, double *r1, double *r2);

/**
 * prints all the elements in a given double array
 * @param pi - pointer to the first position of the given array
 * @param size - array size
 */
void print_array_double_with_index(double *pi, int size);

/**
 * prints all the elements in a given double array, without using an index var
 * to iterate the array
 * @param pi - pointer to the first position of the given array
 * @param size - array size
 */
void print_array_double_without_index(double *pi, int size);

/**
 * strlen implementation using pointer notation. Calculates the length of a
 * string
 * @param ps - pointer to the first position of the given string
 * @return string length
 * i.e. input: ("hello world"); output: 11
 */
int strlen_ptr(char *ps);

/**
 * find the highest and lowest numbers in a given array
 * @param pi - pointer to the first position of the given array
 * @param size - array size
 * @param maxmin - pointer to the first position of the maxmin array
 * @return maxmin array
 * i.e. input: (11, 23, -1, 7); output: (-1, 23)
 */
int *search_minmax(int *pi, int size, int *maxmin);

/**
 * stores the 26 characters of the alphabet in a string and prints them using
 * pointer notation
 */
void init_and_print_alphabet(void);

#endif /* pr05_h */
