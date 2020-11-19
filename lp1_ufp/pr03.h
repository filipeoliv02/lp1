#ifndef pr03_h
#define pr03_h

#include <math.h>
#include <stdio.h>

/**
 * sum all elements of a given integer array
 * @param ints[] - integer array
 * @param size - array size
 * @return - sum of all elements
 * e.g. input: ([1, 2, 3, 4, 5], 5); output: 15
 */
int sum(int ints[], int size);

/**
 * compare two integer arrays with the same size
 * @param a - array for comparison
 * @param b - array for comparison
 * @param size - size for both arrays
 * @return 0 if (a == b) ; -1 if (a < b) ; 1 if (a > b)
 * e.g. input: ([1, 2, 3, 4], [1, 2, 3, 5], 4); output: -1
 * e.g. input: ([1, 3, 3, 4], [1, 2, 3, 4], 4); output: 1
 * e.g. input: ([1, 2, 3, 4], [1, 2, 3, 4], 4); output: 0
 */
int int_compare(int a[], int b[], int size);

/**
 * searches for the lowest index of a given integer
 * @param v - array to be searched
 * @param n - number to search
 * @param size - array size
 * @return - lowest index which contains the integer n
 * e.g. input: ([1, 4, 2, 4], 4, 4); output: 1
 */
int lowest_index_number(int v[], int n, int size);

/**
 * searches for the highest index of a given integer
 * @param v - array to be searched
 * @param n - number to search
 * @param size - array size
 * @return - highest index which contains the integer n
 * e.g. input: ([1, 4, 2, 4], 4, 4); output: 3
 */
int highest_index_number(int v[], int n, int size);

/**
 * counts how many times a given integer appears in a given array
 * @param v - array to be searched
 * @param n - number to search
 * @param size - array size
 * @return - number of times n appears in v
 * e.g. input: ([1, 4, 2, 4], 4, 4); output: 2
 * e.g. input: ([1, 2, 2, 2], 2, 4); output: 3
 */
int count_frequency_number(int v[], int n, int size);

/**
 * finds the number with the highest frequency (mode) in a given array
 * @param v - array to be searched
 * @param size - array size
 * @return mode of array
 * e.g. input: ([1, 4, 2, 4], 4); output: 4
 * e.g. input: ([1, 1, 1, 4], 4); output: 1
 */
int number_highest_frequency(int v[], int size);

/**
 * get the lenght of the greatest sequence of repeated ints
 * @param v - array to be searched
 * @param size - array size
 * @return - lenght of the greatest sequence
 * e.g. input: ([55, 22, 22, 33, 44, 44, 44, 1, 1], 9); output: 3
 */
int size_greatest_segment_repeated_ints(int v[], int size);

int main_pr03(int argc, const char *argv[]);

#endif /* pr03_h */
