#ifndef pr12_h
#define pr12_h

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tp11.h"

//typedef struct student { 
//	char *pname; 
//	int number; 
//	float grade; 
//	struct student* pnext; 
//} STUDENT;

//typedef struct classstudents {
//	char name[MAX50]; 
//	STUDENT *pstudents; 
//	int nstudents; 
//} CLASSSTUDENTS;

/*
==========
* file.txt
==========
Class name: LP1
Number of Students: 3
Joana Correia, 3, 18.1
Joao Miranda, 1, 15.4
Pedro Pereira, 2, 12.6
*/

/**
* saves a given class in a text file
* @param cs - class to save
* @param fn - name of the text file
*/
void save_students_txt(CLASSSTUDENTS cs, char fn[]);

/**
* fills a class by reading the contents of a given text file
* @param pcs - class pointer
* @param fn - name of the text file
*/
void read_students_txt(CLASSSTUDENTS *pcs, char fn[]);

//homework

/*
==========
* file_no_header.txt
==========
Class name: LP1
Joana Correia, 3, 18.1
Joao Miranda, 1, 15.4
Pedro Pereira, 2, 12.6
*/

/**
* saves a given class in a text file without saving nstudents variable
* @param cs - class to save
* @param fn - name of the text file
*/
void save_students_txt_no_header(CLASSSTUDENTS cs, char fn[]);

/**
* fills a class by reading the contents of a given text file with no nstudents indication
* @param pcs - class pointer
* @param fn - name of the text file
*/
void read_students_txt_no_header(CLASSSTUDENTS *pcs, char fn[]);

#endif /* pr12_h */