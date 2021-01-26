#ifndef pr09_h
#define pr09_h

#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

typedef struct point {
  int x, y;
} POINT;

typedef struct circle {
  POINT p;
  int radius;
} CIRCLE;

/**
 * reads a predefined number of points from stdin
 * @param apts - pointer to the first position of the points array
 * @param size - number of points to read
 */
void read_array_points(POINT *apts, int size);

/**
 * prints an array of points
 * @param apts - array of points to be printed
 * @param size - size of the point array
 */
void print_array_points(POINT *apts, int size);

/**
 * translates all the given points by a given delta
 * @param ppts - array of points to be translated
 * @param size - number of points in ppts
 * @param delta - shift to be applied to each of the points in ppts
 * i.e. input: (((1, 1) (2, 2), (3, 3)), 3, (1, 2)); output: ((2, 3), (3, 4),
 * (4, 5))
 */
void translation_dyn_array_points(POINT *ppts, int size, POINT delta);

/**
 * allocates memory and reads from the stdin size circles
 * @param cpts - CIRCLE pointer. Starts as NULL
 * @param size - number of circles to read from the stdin
 * @return - pointer to the first position of the inserted circles
 */
CIRCLE *read_dyn_array_circles(CIRCLE *cpts, int size);

/**
 * finds the circle with the greatest area in a given set of circles
 * @param cpts - pointer to the first position of the circle array
 * @param size - number of circles pointed by cpts
 * @return - circle with the greatest area
 */
CIRCLE find_circle_greatest_area(CIRCLE *cpts, int size);

/**
 * finds the circle with the greatest perimiter in a given set of circles
 * @param cpts - pointer to the first position of the circle array
 * @param size - number of circles pointed by cpts
 * @return - circle with the greatest perimiter
 */
CIRCLE find_circle_greatest_perimiter(CIRCLE *cpts, int size);

int main_pr09(int argc, char const *argv[]);

#endif /* pr09_h */
