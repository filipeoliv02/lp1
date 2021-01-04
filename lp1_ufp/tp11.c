#include "tp11.h"

int main_tp11(int argc, const char *argv[]) {
    CLASSSTUDENTS turma_lp1 = {"lp1", NULL, 0};
    create_dynarray_classstudents(&turma_lp1, 4);
    insert_student_dynarray_classstudents(&turma_lp1, "Joao Ribeiro", 1111,
                                          0.0f);
    insert_student_dynarray_classstudents(&turma_lp1, "Jose Silva", 2222, 0.0f);
    insert_student_dynarray_classstudents(&turma_lp1, "Diogo Ferreira", 3333,
                                          0.0f);
    print_dynarray_classstudents(turma_lp1);

    return 1;
}

void create_dynarray_classstudents(CLASSSTUDENTS *pcs, int initsize) {
    STUDENT *pstudents = (STUDENT *)calloc(initsize, sizeof(STUDENT));
    pcs->pstudents = pstudents;
    (*pcs).nstudents = initsize;
}

void insert_student_dynarray_classstudents(CLASSSTUDENTS *pcs, char name[],
                                           int number, float grade) {
    int i = 0;
    STUDENT *pstudent = pcs->pstudents;
    for (i = 0; i < pcs->nstudents; i++) {
        if (pstudent->pname == NULL) {
            pstudent->pname = (char *)malloc(strlen(name + 1));
            strcpy(pstudent->pname, name);
            pstudent->number = number;
            pstudent->grade = grade;
            return;
        }
        pstudent++;
    }
    if (i == pcs->nstudents) {
        int oldsize = pcs->nstudents, newsize = oldsize + 10;
        pcs->pstudents = realloc(pcs->pstudents, newsize * sizeof(STUDENT));
        for (i = oldsize; i < newsize; i++) {
            pstudent->pname = NULL;
            pstudent->number = 0;
            pstudent->grade = 0.0f;
        }
        pstudent = pcs->pstudents + oldsize;
        strcpy(pstudent->pname, name);
        pstudent->number = number;
        pstudent->grade = grade;
    }
}
void print_dynarray_classstudents(CLASSSTUDENTS cs) {
    STUDENT *pstudent = cs.pstudents;
    for (int i = 0; i < cs.nstudents; i++) {
        printf("print_dynarray_classstudents(): student[%d] = %s, %d, %0.1f\n",
               i, pstudent->pname, pstudent->number, pstudent->grade);
        pstudent++;
    }
}
