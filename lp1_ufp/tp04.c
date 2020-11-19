#include "tp04.h"
#include <stdlib.h>

int main_tp04(int argc, const char *argv[]) {
  // printf("%d", numberOfDigitsRecursive(45546));
  // %lf imprime um double - o '.0' antes do lf faz com que nao imprima casas
  // decimais, so o inteiro
  // printf("%.0lf", multiply_recursive(6, 4));
  // printf("%.0lf", factorial_recursive(24));
  // print_multiplication_recursive(5, 10);
  // char string[] = "asdbsuibfweoniowcpwicwexc";
  // read_vowels(string, 30);
  // print_vowels(string, 30);
  int arrayint[9] = {6, 5, 3, 3, 3, 4, 3, 2, 1};
  int pattern[2] = {3, 3};
  printf("%d",count_segments_repeated_ints(arrayint, 9, pattern, 2));
  
  return 1;
}

int numberOfDigitsRecursive(int a) {
  int count = 0;
  while (a / 10 != 0) {
    count++;
    a /= 10;
    numberOfDigitsRecursive(a);
  }
  count++;
  return count;
}

double multiply_recursive(int a, int b) {
  double result = 0;
  if (a == 0 || b == 0)
    return 0;
  while (a != 0) {
    a--;
    multiply_recursive(a, b);
    result = result + b;
  }
  return result;
}

double factorial_recursive(int n) {
  double result = 1;
  if (n == 0 || n == 1)
    return 1;
  while (n != 0) {
    result = result * n;
    n--;
    factorial_recursive(n);
  }
  return result;
}

void print_multiplication_recursive(int n, int level) {
  while (level != 0) {
    printf("%d x %d = %d\n", n, level, (n * level));
    level--;
    print_multiplication_recursive(n, level);
    return;
  }
}

char *read_vowels(char vowels[], int size) {
  char *final;
  final = (char *)malloc(size);
  int finalsize = 0;
  for (int i = 0; i <= size; i++) {
    if (isVowel(vowels[i])) {
      final[finalsize] = vowels[i];
      finalsize++;
    }
  }
  return final;
}

void print_vowels(char c[], int size) { printf("%s", read_vowels(c, size)); }

int max(int ints[], int size) {
  int maior = ints[0];
  for (int i = 1; i < size; i++) {
    if (ints[i] > maior) {
      maior = ints[i];
    }
  }
  return maior;
}

int min(int ints[], int size) {
  int menor = ints[0];
  for (int i = 1; i < size; i++) {
    if (ints[i] > menor) {
      menor = ints[i];
    }
  }
  return menor;
}

float mean(int ints[], int size) {
  float mean;
  for (int i = 0; i < size; i++) {
    mean += ints[i];
  }
  mean /= size;
  return mean;
}

int count_segments_repeated_ints(int v[], int sizev, int p[], int sizep) {
  int equal = 0, count = 0, j = 0;

  for (int i = 0; i < sizev; i++) {
    if (v[i] == p[0]) {
      equal = 1;
      for (j = 0; j < sizep && equal == 1; j++) {
        if (v[j] == p[j]) {
          equal = 1;
        } else
          equal = 0;
      }
      if (equal == 1 && j == sizep) {
        count++;
      }
    }
  }
  return count;
}
