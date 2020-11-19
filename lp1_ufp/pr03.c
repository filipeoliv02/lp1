#include "pr03.h"

int main_pr03(int argc, const char *argv[]) {
  int returnValue;
  int array1[20] = {55, 6, 9, 7, 4, 6, 4, 2, 3, 8, 8, 8, 8, 8, 2, 5, 5, 5};
  int array2[20] = {13, 0, 1, 6, 9, 3, 84, 9, 6, 2,
                    4,  9, 4, 5, 4, 2, 3,  1, 0, 3};
  returnValue = size_greatest_segment_repeated_ints(array1, 20);
  printf("%d", returnValue);

  return 1;
}

int sum(int ints[], int size) {
  int sum = 0;
  for (int i = 0; i <= size; i++) {
    sum += ints[i];
  }
  return sum;
}

/**
 *
 * @param a
 * @param b
 * @param size
 * @return
 */

int int_compare(int a[], int b[], int size) {
  if (sum(a, size) > sum(b, size)) {
    return 1;
  } else if (sum(a, size) < sum(b, size)) {
    return -1;
  } else
    return 0;
}

int lowest_index_number(int v[], int n, int size) {

  for (int i = 0; i <= size; i++) {
    if (v[i] == n) {
      return i;
    }
  }
  return -1;
}

int highest_index_number(int v[], int n, int size) {
  int ind = -1;
  for (int i = 0; i <= size; i++) {
    if (v[i] == n) {
      ind = i;
    }
  }
  return ind;
}

int count_frequency_number(int v[], int n, int size) {
  int count = 0;
  for (int i = 0; i <= size; i++) {
    if (v[i] == n)
      count++;
  }
  return count;
}

int number_highest_frequency(int v[], int size) {
  // Sort depois ver os mais frequentes
  int temp;
  for (int i = 0; i < (size - 1); ++i) {
    for (int j = 0; j < size - 1 - i; ++j) {
      if (v[j] > v[j + 1]) {
        temp = v[j + 1];
        v[j + 1] = v[j];
        v[j] = temp;
      }
    }
  }
  int countEqual = 0, sequenceSize = 0, biggest = 0;
  for (int k = 1; k <= size; k++) {
    if (v[k] == v[k - 1]) {
      countEqual++;

    } else {
      if (countEqual >= sequenceSize) {
        biggest = v[k - 1];
        countEqual = 0;
      } else {
        countEqual = 0;
      }
    }
  }
  return biggest;
}

int size_greatest_segment_repeated_ints(int v[], int size) {
  int countEqual = 1, biggest = 0;
  for (int i = 1; i <= size; i++) {
    if (v[i] == v[i - 1]) {
      countEqual++;
      if (countEqual >= biggest)
        biggest = countEqual;
    } else {
      countEqual = 1;
    }
  }

  return biggest;
}
