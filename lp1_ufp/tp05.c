//
// Created by filipe on 25/10/20.
//
#include "tp05.h"
#include "tp03.h"

int main_tp05(int argc, const char *argv[]) {
  char string[] = {"ljdjkgjbdfdfp"};
  printf("%d",index_first_vogal(string));

  return 0;
}

int index_first_vogal(char str[]) {
  for (int i = 0; str['\0']; i++) {
    if (isVowel(str[i]))
      return i;
  }

  return -1;
}
