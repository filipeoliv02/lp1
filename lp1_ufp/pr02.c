#include "pr02.h"

int main_pr02(int argc, const char *argv) {
    int number = 0;
    printf("Insert a number\n");
    scanf("%d", &number);
    printPyramid(number);
    //floatToHoursMinutes(2.59);
    return 0;
}

void printNumberClassesUnitsToUpperClasses(int num) {
    while (num != 0) {
        printf("%d", num % 10);
        num /= 10;
    }
}

int decimalToBinary(int dec) {
    int bin = 0, i = 0;
    while (dec != 0) {
        bin *= (dec % 2) * pow(10, i++);
        dec /= 2;
    }
    return bin;
}

int multiplication(int a, int b) {
    int result = 0, c = 0, neg = 0;
    if (a < 0) {
        c = 0 - a;
        neg = 1;
    } else {
        c = a;
    }
    for (int i = 1; i <= c; i++) {
        result += b;
    }
    if (neg == 1) {
        result = 0 - result;
    }

    return result;
}

void printMultiplicationTable(int num) {
    for (int i = 1; i <= 10; i++) {

        printf("%d x %d = %d\n", num, i, multiplication(num, i));
    }
}

int isNumberTriangular(unsigned int num) {
    int calc = 0;
    for (int i = 0; i < num; i++) {
        calc = i * (i + 1) * (i + 2);
        if (calc == num) {
            return 1;

        } else if (calc > num) {
            return 0;
        }
    }

    return 0;
}

void printPyramid(int width) {

    for (int i = 0; i < ceil((float) width / 2); i++) {
        for (int j = i; j < width - i; j++) {
            printf("%d ", j + 1);
        }
        printf("\n%*c", (i + 1) * 2, ' ');
    }
}

void floatToHoursMinutes(float f) {
    int hh = (int) f;
    int mm = round((f - hh) * 100);
    printf("%d hh, %d mm \n", hh, mm);

}
