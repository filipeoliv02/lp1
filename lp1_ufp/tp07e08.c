#include "tp07e08.h"

int main_tp07e08(int argc, const char *argv[]) {
    char m1[MAX128][MAX128];
    char m2[MAX128][MAX128];
    int **ppi = NULL;
    count_consonants(argc, argv, m1, m2);
    ppi = create_dynmatrix_ints(4, 5);
    print_dynmatrix_ints(ppi, 4, 5);
    return 0;
}

void count_consonants(int c, const char *astr[], char strings[][MAX128],
                      char consonants[][MAX128]) {
    for (int l = 0; l < c; l++) {
        strcpy(strings[l], astr[l]);
        int k = 0;
        for (int col = 0; strings[l][col] != '\0'; col++) {
            if (isConsonant(strings[l][col])) {
                consonants[l][k++] = strings[l][col];
            }
        }
        consonants[l][k] = '\0';
        printf("consonants[%d] = %s -> %d\n", l, consonants[l], k);
    }
}

int **create_dynmatrix_ints(int lines, int columns) {
    int **pp = (int **)calloc(sizeof(int *), lines);
    for (int lin = 0; lin < lines; lin++) {
        int *p = (int *)calloc(sizeof(int), columns);
        *(pp + lin) = p;
    }
    return pp;
}

void print_dynmatrix_ints(int **ppints, int lines, int columns) {
    for (int lin = 0; lin < lines; lin++) {
        for (int col = 0; col < columns; col++) {
            printf("%d\t", *(*(ppints + lin)+col);
        }
        printf("\n");
    }
}

void set_dynmatrix_ints(int **ppints, int lines, int columns, int value,
                        int newvalue) {}
