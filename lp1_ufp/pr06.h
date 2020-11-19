#ifndef pr06_h
#define pr06_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* print args received from the command line
* @param argc - number of args
* @param argv - set of received args
*/
void print_received_args(int argc, const char *argv[]) {

    for (int i = 0; i < argc; i++) {

        printf("%s\n", *(argv + i));

    }

}

/**
* Convert a string to uppercase
* @param pstr - input string
* @param strUpper - resulting uppercase string
* @return resulting uppercase string
* i.e. input: ("minus", ""); output: "MINUS"
*/
/*char* str_to_upper(char *pstr, char strUpper[]){

    for(int i =0; *(strUpper+i) == '\0'; i++){

        if( *(strUpper+i) == pstr ){

            toupper(*(strUpper+i));

        }

    }
}*/

/**
* Computes the sum (PLUS), subtraction (MINUS), multiplication (MULT) or division (DIV) of two
* received numbers
* @param argc - number of args
* @param argv - numbers and operation
* @return - result
* i.e. input:(4, ("./main", "12", "plus", "3")); output: 15
* i.e. input:(4, ("./main", "5", "MULT", "4")); output: 20
*/
/*
int calculator_command_line(int argc, const char *argv[]){

int a = atoi(*(argv+0));
int b = atoi(*(argv+2));


    for (int i = 0; i < argc; i++) {

        for(int j =0; *(argv+i) == '\0'; j++){
            

        }

    }

}
*/

/**
* concatenates two strings
* @param pstr1 - first string
* @param pstr2 - second string
* @param str - resulting string after concatenation
* @return - resulting string after concatenation
* i.e. input:("ola", " mundo", ""); output: "ola mundo"
* i.e. input:("ola mundo", "!", ""); output: "ola mundo!"
*/
char* string_cat(const char *pstr1, const char *pstr2, char str[]);

/**
* concatenates argv strings
* @param argc - number of entries in argv
* @param argv - args to concatenate
* @param str - resulting string after concatenation
* @return - resulting string after concatenation
* i.e. input:(3, ("ola", " mundo", "!"), ""); output: "ola mundo!"
* i.e. input:(4, ("four", " args", " to", " cat"), ""); output: "four args to cat"
*/
char* cat_argv_strings(int argc, const char *argv[], char str[]);

/**
* computes the frequency of each word in the argv array
* @param argc - number of args
* @param argv - set of args
* @param freqs - frequencies of each string
* @return - number of distinct strings in argv (size of freqs)
* i.e. input:(6, ("aa", "bbb", "ccc", "aa", "ccc", "aa"), ""); output: 3, freq[] = {3, 1, 2}
* i.e. input:(6, ("aa", "bbb", "ccc", "aaa", "ccc", "ddd"), ""); output: 5, freq[] = {1, 1, 2, 1, 1}
*/
int frequencies_strings_argv(int argc, const char *argv[], int freqs[]);

/**
* sums all numbers is argv
* @param argc - number of args
* @param argv - set of args
* @return argv sum
* i.e. input: (3, ("1", "2", "3")); output: 6
* i.e. input: (5, ("1", "2", "3", "4", "1")); output: 11
*/
/*int sum_all_argv(int argc, const char *argv[]){

    int sum;


    for (int i = 0; i < argc; i++) {

        sum = sum + (*(argv+i)-'0');

    }



}*/



#endif /* pr06_h */