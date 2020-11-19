#include "pr05.h"

int main_pr05(int argc, char const *argv[]) {
  double array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  int size = 8;
  int x = 5, y = 7;
  /* printf("%d %d\n", x, y);
   swap_pxy(&x, &y);
   printf("%d %d\n", x, y);*/
  for (int i = 0; i <= size; i++) {
    printf("%.0lf | ", array[i]);
  }
  printf("\n");
  swap_double_array_ptr(array, x, y);
  for (int i = 0; i <= size; i++) {
    printf("%.0lf | ", array[i]);
  }
  printf("\n");
  return 1;
}

void swap(int x, int y) {
  int aux = x;
  x = y;
  y = aux;
}

void swap_pxy(int *px, int *py) {
  int aux = *px;
  *px = *py;
  *py = aux;
}

double *swap_double_array_ptr(double *pi, int pos1, int pos2) {
  double aux = *(pi + pos1);
  *(pi + pos1) = *(pi + pos2);
  *(pi + pos2) = aux;
  return pi;
}
