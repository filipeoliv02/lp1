//
//  tp11.h
//  lp1_ufp
//
//  Created by Rui on 31/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp11_h
#define tp11_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX200 200

/** Definir estruturas para aluno e turma */
typedef struct student {
    char *pname;
    int number;
    float grade;
    struct student *pnext; //To be used only next class - linked list
} STUDENT;

/*
typedef struct student_node {
    STUDENT student_info;
    struct student_node *pnext;
}STUDENT_NODE;
*/
typedef struct classstudents {
    char name[MAX200];
    STUDENT *pstudents;
    int nstudents;
} CLASSSTUDENTS;

/**
 * Criar um array dinâmico de students com um dado tamanho inicial.
 * @param pcs - apontador para o array que caracteriza a turma de estudantes (CLASSSTUDENTS).
 * @param initsize - tamanho inicial do array dinâmico de estudantes.
 */
void create_dynarray_classstudents(CLASSSTUDENTS *pcs, int initsize);

/**
 * Insere um student no array dinâmico da turma de students.
 * @param pcs - apontador para o array que caracteriza a turma de estudantes (CLASSSTUDENTS).
 * @param name - nome do aluno a inserir no array dinâmico de estudantes.
 * @param number - número do aluno a inserir no array dinâmico de estudantes.
 * @param grade - nota do aluno a inserir no array dinâmico de estudantes.
 */
void insert_student_dynarray_classstudents(CLASSSTUDENTS *pcs, char name[], int number, float grade);

/**
 * Procura um student no array dinâmico da turma de students.
 * @param cs - cópia do array que caracteriza a turma de estudantes (CLASSSTUDENTS).
 * @param name - nome do aluno a procurar no array dinâmico de estudantes.
 * @return apontador para o student ou NULL (caso não exista).
 */
STUDENT* find_student_dynarray_classstudents(CLASSSTUDENTS cs, char name[]);

/**
 * Imprime os students do array dinâmico da turma de students.
 * @param cs - cópia do array que caracteriza a turma de estudantes (CLASSSTUDENTS).
 */
void print_dynarray_classstudents(CLASSSTUDENTS cs);

/**
 * Remove um student do array dinâmico da turma de students.
 * @param pcs - apontador para o array que caracteriza a turma de estudantes (CLASSSTUDENTS).
 * @param name - nome do aluno a procurar no array dinâmico de estudantes.
 * @return cópia do student removido ou NULL (caso não exista).
 */
STUDENT remove_student_dynarray_classstudents(CLASSSTUDENTS *pcs, char name[]);

/**
 * Liberta os dados de todos os students armazenados no array de students da turma.
 */
void free_dynarray_classstudents(CLASSSTUDENTS *pcs);

int main_tp11(int argc, const char * argv[]);


#endif /* tp11_h */
