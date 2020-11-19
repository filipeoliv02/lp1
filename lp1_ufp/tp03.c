#include "tp03.h"

int main_tp03(int argc, const char **argv) {
    countWordsStdin();

    return 1;
}

int isDigit(char c) { return ((c >= '0' && c <= '9') ? 1 : 0); }

int isVowel(char c) {
    char c2 = tolower(c);
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
            break;
        default:
            return 0;
    }
}

int isConsonant(char c) {
    char c1 = toupper(c);
    if ((c1 > 'A' && c1 <= 'Z') && !isVowel(c))
        return 1;
    return 0;
}

int isWhite(char c) {
    switch (c) {
        case ' ':
        case '\t':
        case '\n':
        case '\r':
        case '\0':
            return 1;
            break;
        default:
            return 0;
    }
}

void printKeyType(char c) {}

int countWordsStdin() {
    char c = '\0';
    int wordCount = 0;
    int isInside = 0;
    while ((c = getchar()) != '\n') {
        if (isWhite(c) && isInside) {
            wordCount++;
            isInside = 0;
        } else if (!isWhite(c) && !isInside) {
            isInside = 1;
        }
    }
    if (isInside)
        wordCount++;
    printf("Words:%d\n", wordCount);
    return wordCount;
}
