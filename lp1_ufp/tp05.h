//
//  tp05.h
//  lp1_ufp
//
//  Created by Rui on 18/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp05_h
#define tp05_h

#include <stdio.h>
#define MAXCOLS100 100
#define NCOLUMNS 100


//============= BEGIN TODO FROM PREV CLASS =============
/**
 * Receives an integer and recursively returns the number of digits,
 * e.g. 218 = 3 digits (2, 1, 8).
 *  @param a - int number to decompose
 *   @return number of digits of a
 */
int numberOfDigitsRecursive(int a);

/**
 * Multiplies 2 numbers using a recursive algorithm.
 * @param a - first operand
 * @param b - second operand
 * @return the product of a and b
 */
double multiply_recursive(int a, int b);

/**
 * Prints recursively the multiplaction table of a given number.
 * @param n - number to calculate and print the multiplication table
 * @param level - which level of the multiplcation table to print
 */
void print_multable_recursive(int n, int level);


//============= END TODO FROM PREV CLASS =============


/**
 * Função que procura o índice da 1a vogal na string dada.
 * @param str - string a analisar.
 * @return index da primeira vogal da string
 * */
int index_first_vogal(char str[]);

/**
 * Função que substitui um char o por outro r numa string.
 * @param str - string a analisar.
 * @param o - char original a substiruir.
 * @param r - char pelo qual substituir.
 * @return endereço da string actualizada.
 */
char* replace_char_by_char(char str[], char o, char r);

/**
 * Função que remove caracteres brancos existentes na string.
 * @param str - string a analisar.
 * @return endereço da string actualizada.
 */
char* remove_blanks(char str[]);

/**
 * Função que remove todos char c existentes na string.
 * @param str - string a analisar.
 * @param sub - substring com chars a remover.
 * @return endereço da string actualizada.
 */
char* remove_chars(char str[], char sub[]);

/**
 * Função que retorna índiice mais à esquerda de sub dentro de str.
 * @param str - string a analisar.
 * @aparam sub - sub string a encontrar.
 * @return índice da sub am str.
 *
 * */
int index_sub_left(char str[], char sub[]);

/**
 * Função que imprime matrizes Nx100.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 */
void print_matrixNx100(int mNx100[][MAXCOLS100], int lines, int columns);

/**
 * Função de inicialização/leitura de matriz de ints cujo número columns < NCOLUMNS.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 */
void read_matrixNx100_ints(int mNx100[][NCOLUMNS], int lines, int columns); // Ler/armazenar ints na matriz

/**
 * Função de inicialização/leitura de matriz de strings, cujo número columns < NCOLUMNS.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 */
void read_matrixNx100(char mNx100[][NCOLUMNS], int lines, int columns); // Ler/armazenar frases com fgets()

/**
 * Função para multiplicar uma linha de uma matriz por um dado número escalar.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lines - número de linhas da matriz.
 * @param columns - número de colunas da matriz (<MAXCOLS100).
 * @param line - linha a multiplicar pelo escalar.
 * @param scalar - número pelo qual multiplicar a linha.
 */
void multiply_matrixNx100_line_by_scalar(int mNx100[][MAXCOLS100], int lines, int columns, int line, int scalar);

/**
 * Função que some os elementos das linhas lin1 e lin2 de uma matriz, colocando o resultado na lin3.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param lin1 - 1a linha da matriz a somar.
 * @param lin2 - 2a linha da matriz a somar.
 * @param lin3 - linha onde colocar o resultado da somas das linhas lin1 e lin2.
 */
void sum_lines_matrixesNx100(int mNx100[][MAXCOLS100], int lin1, int lin2, int lin3, int columns);

/** Função que calcula a transposta de uma matriz.
 * @param mNx100 - matriz com número máximo de colunas definido por MAXCOLS100.
 * @param size - número de linhas/colunas da matriz.
 */
void transposed_matrixNx100(int mNx100[][MAXCOLS100], int size);

/**
 * Main test function for TP class 05.
 * @param argc - arg count.
 * @param argv - array os strings.
 * @return an error code (0 if no error).
 */
int main_tp05(int argc, const char * argv[]);

#endif /* tp05_h */
