#include "pr04.h"

int main_pr04(int argc, const char *argv) {
    char str[] = "hello world3";
    char s[] = "aaabbbbcccdbcbdbcbdbcbdcbcbhd";
    //printf("%f", pow_recursive(5, 2));
    //print_hangman_recursive(6);
    //greatest_word_string(str);
    delete_repeated_chars(s);


    return 1;
}

double pow_recursive(int b, int e) {
    if (e == 0) return 1;
    return b * pow_recursive(b, e - 1);
}

void print_hangman_recursive(int level) {
    if (level > 1)
        print_hangman_recursive(level - 1);
    switch (level) {
        case 1 :
            printf("\\");
            break;
        case 2 :
            printf("O");
            break;
        case 3 :
            printf("/");
            break;
        case 4 :
            printf("\n |");
            break;
        case 5 :
            printf("\n/");
            break;
        case 6 :
            printf(" \\");
            break;
        default:
            break;
    }
}

int greatest_word_string(char str[]) {
    int count = 0, max = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (count > max)
                max = count;
            count = 0;
        } else count++;
    }
    if (count > max)
        max = count;
    printf("%d", max);
    return 1;
}

char *delete_repeated_chars(char s[]) {
    int i2 = 0, j = 0;
    for (int i = 0; s[i]; i++) {

        for (j = i - 1; j >= 0; j--) {
            if (s[i] == s[j]) {
                break;
            }
        }
        if (j == -1) {
            s[i2++] = s[i];
        }
    }
    s[i2] = '\0';
    printf("%s", s);
    return s;


}
