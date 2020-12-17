#include "tp13.h"

#include <stdio.h>

/**
 * @brief função main
 * @return
 */

int main() {
    char filename[] = "./sample.bin";
    CLASSSTUDENTS lp1 = {"LP1", NULL, 0};
    /*insert_student_ordered(&lp1, "NUNO", 1111, 0.0f);*/
    /*insert_student_ordered(&lp1, "CATARINA", 2222, 0.0f);*/
    /*save_students_bin(lp1, filename);*/
    read_students_bin(&lp1,filename);
    print_students(lp1);
    return 0;
}

void save_students_bin(CLASSSTUDENTS cs, char fn[]) {
    FILE* fp = NULL;
    if ((fp = fopen(fn, "wb")) == NULL) {
        printf("erro ao abrir ficheiro %s\n", fn);
        return;
    }
    int size = strlen(cs.name) + 1;
    fwrite(&size, sizeof(size), 1, fp);
    fwrite(cs.name, sizeof(char), size, fp);
    fwrite(&(cs.nstudents), sizeof(cs.nstudents), 1, fp);
    STUDENT* ps = cs.pstudents;
    for (int i = 0; i < cs.nstudents; i++) {
        size = strlen(ps->pname) + 1;
        fwrite(&size, sizeof(size), 1, fp);
        fwrite(ps->pname, sizeof(char), size, fp);
        fwrite(&(ps->number), sizeof(int), 1, fp);
        fwrite(&(ps->grade), sizeof(float), 1, fp);
        ps = ps->pnext;
    }
    fclose(fp);
}

void read_students_bin(CLASSSTUDENTS *pcs, char fn[]) {
    FILE* fp = NULL;
    if ((fp = fopen(fn, "rb")) == NULL) {
        printf("erro ao abrir ficheiro %s\n", fn);
        return;
    }
    int size = 0, ns=0;
    fread(&size, sizeof(size), 1, fp);
    fread(pcs->name, sizeof(char), size, fp);
    fread(&ns, sizeof(int), 1, fp);
    for (int i = 0; i < ns; i++) {
        fread(&size,sizeof(size),1,fp);
        char name[MAX200];
        int number=0;
        float grade=0.0f;
        fread(name,sizeof(char),size,fp);
        fread(&number,sizeof(number),1,fp);
        fread(&grade,sizeof(grade),1,fp);
        insert_student_ordered(pcs,name,number,grade);

    }
    fclose(fp);
}
