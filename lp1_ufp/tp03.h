//
//  tp03.h
//  lp1_ufp
//
//  Created by Rui on 10/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp03_h
#define tp03_h

#include <stdio.h>
#include <ctype.h>


/**
 * This function checks if a char is a digit or not.
 * @param c - char to be checked.
 * @return 1 (if is digit); 0 otherwise.
 */
int isDigit(char c);

/**
 * Ler em ciclo uma tecla seguida por \n (Terminar com '.') e para cada tecla
 * retorna imprime %c - is digit | not digit.
 */
void readKeysPressedPrintDigits(void);

/**
 * This function checks if a char is a vowel.
 * @param c - the char to be checked.
 * @return 1 (if is vowel: 'a' 'e' | 'i' | 'o' | 'u'); 0 otherwise.
 */
int isVowel(char c);

/**
 * This function checks if a char is a consonante.
 * @param c - the char to be checked.
 * @return 1  (if is consonant); 0 otherwise.
 */
int isConsonant(char c);

/**
 * This function checks if a char is a white/invisible.
 * @param c - the char to be checked.
 * @return 1 (if is white char: ' ' '\t' | '\n' | '\r'); 0 otherwise.
 */
int isWhite(char c);


/**
 * This function prints a char type: digit, vowel, consonant, special.
 * @param c - the char to be checked.
 */
void printKeyType(char c);

/**
 * Esta função deverá ler em ciclo uma tecla seguida por \n (Terminar com '.')
 * e para cada tecla imprimir o tipo de caracter, i.e.
 * digito =  %d", "vogal = %c", "consoante = %c", "outro = %c".
 */
void readKeysPressedPrintKeyType(void);

/**
 * This function read characters from stdin (WITHOUT using strings) managing only input from
 * the keyboard buffer and counting the number of words (set of chars separated by whitespaces, i.e.
 * {' ', '\t', '\n', '\r'}.
 */
int countWordsStdin(void);

/**
 * This function receives an integer and iteratively returns the number of digits,
 * e.g. 218 = 3 digits (2, 1, 8).
 *  @param a - an int value to be sperated in digits.
 *  @return the number of digits found on the submitted int value.
 */
int numberOfDigitsIterative(int a);

/// Test funtcion for class tp03
int main_tp03(int argc, const char *argv[]);

#endif /* tp03_h */
