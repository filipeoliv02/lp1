#ifndef pr11_h
#define pr11_h

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

/**
* inserts a new student into a sorted linked list
* @param pcs - class pointer
* @param name - new student's name
* @param grade - new stdudent's grade
* @param number - new student's number
* Note: Insertion at FIRST, HEAD, TAIL, MIDDLE
*/
void insert_student_ordered(CLASSSTUDENTS *pcs, char name[], float grade, int number);

/**
* removes a student from a sorted linked list
* @param pcs - class pointer
* @param name - student's name
* Note: Remove at EMPTY, HEAD, DO_NOT_EXIST, TAIL/MIDDLE
*/
void remove_student_ordered(CLASSSTUDENTS *pcs, char name[]);

/**
* Finds a student in a sorted linked list of students
* @param pcs - class of students
* @param name - student's name
* @return - pointer student with matching name
*/
STUDENT* find_student_ordered(CLASSSTUDENTS cs, char name[]);

/**
* calcs the average class grade, given a sorted linked list of students
* @param cs - class of students
* @return - avg class grade
*/
float get_avg_class_grade(CLASSSTUDENTS cs);

// changes student grade
void set_student_grade_ordered(CLASSSTUDENTS cs, char name[], int grade);

// retreives student grade
float get_student_grade_ordered(CLASSSTUDENTS cs, char name[]);

// prints all the students in a given class
void print_students(CLASSSTUDENTS cs);

#endif /* pr11_h */