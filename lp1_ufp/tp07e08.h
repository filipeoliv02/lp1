//
//  tp07.h
//  lp1_ufp
//
//  Created by Rui on 31/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp07e08_h
#define tp07e08_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tp03.h"
#define MAX128 128

//===================== tp07.h =====================

/** Implemente função que recebe argc/argv e invoca várias funções para:
 * i) Usar 2 matrizes 2D de chars, a primeira para armazenar uma copia das
 * strings do argv e a segunda para armazenar apenas as consoantes dessas
 * strings; ii) TPC: ordenar de forma crescente as strings e respectivas
 * consoantes, em função do número de consoantes; iii) imprimir as strings e
 * respectivo número de consoantes. e.g. $ prog um quatro nove ----> um (1
 * consoante), nove (2 consoantes), quatro (3 consoantes)
 */
void count_consonants(int c, const char *astr[], char strings[][MAX128],
                      char consonants[][MAX128]);

/** Desenvolver uma função que recebe um array de strings e imprime apenas as
 * que não se repetem, e.g., dadas as strings abaixo
 * char *mstrs[] = { ""aa"", ""bbb"", ""ccc"", ""aa"", ""ccc"", ""ddd"" };
 * imprime apenas "bbb" e "ddd"
 */
void print_non_repeated_strs(const char *astr[], int size);

/** Checks if str exists into astr before position i.
 * @param str - string to check.
 * @param argv - array of strings to be cheked against.
 * @param line - position before which to check.
 * @return 0 (false) or 1 (true).
 */
int str_exists_before(const char str[], const char *argv[], int line);

//===================== tp08.h =====================

/**
 * Função para criar uma matriz dinâmica de ints;
 *  i) malloc dyn array int* (correspondente ao array de  apontadores para int)
 *  ii) ciclo para malloc dos vários arrays dinâmicos de int
 */
int **create_dynmatrix_ints(int lines, int columns);

/** Função para imprimir a matriz dinâmica de floats
 * @param ppints - apontador para a matriz de inteiros;
 * @param lines - número de linhas;
 * @param columns - número de colunas;
 */
void print_dynmatrix_ints(int **ppints, int lines, int columns);

/** Função para mudar um valor existente nas células da matriz dinâmica de ints,
 * por outro novo valor.
 * @param ppints - apontador para a matriz de inteiros;
 * @param lines - número de linhas;
 * @param columns - número de colunas;
 * @param value - valor a mudar.
 * @param newvalue - novo valor.
 */
void set_dynmatrix_ints(int **ppints, int lines, int columns, int value,
                        int newvalue);

/** Função para libertar memória de uma matriz dinâmica de ints
 * @param ppints - apontador para a matriz de inteiros;
 * @param lines - número de linhas;
 * @param columns - número de colunas.
 */
void free_dynmatrix_ints(int **ppints, int lines, int columns);

int main_tp07e08(int argc, const char *argv[]);

#endif /* tp07e08_h */
