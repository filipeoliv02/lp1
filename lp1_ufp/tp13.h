//
//  tp13.h
//  lp1_ufp
//
//  Created by Rui on 13/12/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp13_h
#define tp13_h

#include <stdio.h>
#include <stdlib.h>

#include "tp11.h"

// Gravar num ficheiro binário os dados da CLASSSTUDENT e da lista de STUDENT e
// respectivas notas; Definir formato do conteúdo do ficheiro: [4 chars (nome
//turma) | LP1\0 | 3 (alunos) [7 chars (nome aluno) | PEDRO\0 | 1111
//| 12.50]...]

/**
 * Saves the informaton of a dynamic array of students into a binary fle.
 * @param cs - copy of class students;
 * @param fname - path to binary file.
 */
void save_students_bin(CLASSSTUDENTS cs, char fname[]);

/**
 * Reads the informaton of a dynamic array of students from a binary fle and
 * loads it into main memory.
 * @param pcs -pointer to class students;
 * @param fname - path to binary file.
 */
void read_students_bin(CLASSSTUDENTS *pcs, char fname[]);

int main_tp13(int argc, const char *argv[]);

#endif /* tp13_h */
