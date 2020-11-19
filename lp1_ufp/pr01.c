#include "pr01.h"
#include <stdio.h>

int main_pr01(int argc, const char *argv[]) {
    // readCharPrintAscii('h');
    printPrimeNumbers(0, 99999);

    //printAsciiTableLetters();
    return 0;
}

void readCharPrintAscii(char c) { printf("%d", c); }

void printPrimeNumbers(int min, int max) {
    int count = 0;
    for (int i = min; i <= max; i++) {
        if (i <= 1)
            continue;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 0) {
            printf("| %d ", i);
        }
        count = 0;
    }
}

void printDigitOrNot() {
    char c;
    int numeros = 0, letras = 0, brancos = 0, carateres = 0;
    while ((c = getchar()) != '.') {
        if (c >= '0' && c <= '9') numeros++;
        if (c >= 'a' && c <= 'Z') letras++;
        if (c == '\n' || c == '\t') carateres++;
        if (c == '\0' || c == ' ') brancos++;

    }
    printf("%d - numeros\n%d - letras\n%d - carateres\n%d - brancos", numeros, letras, carateres, brancos);
}

void printAsciiTableLetters(void) {
    for (int i = 'A'; i <= 'Z'; i++) {
        printf("%d - %c  |  %d - %c  |\n_________\n", i + ('a' - 'A'), i + ('a' - 'A'), i, i);
    }
}
