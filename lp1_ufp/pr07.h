#ifndef pr07_h
#define pr07_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/**
* allocates memory for an integer
* @return pointer to the allocated memory
*/
int* alloc_dyn_int(void){

return (int*)calloc(1, sizeof(int));

}

/**
* allocates memory for an array of integers
* @param n - number of positions to be allocated
* @return pointer to the allocated memory
*/
int* alloc_dyn_int_array(int n){

    return (int*)calloc(n, sizeof(int));

}

/**
* allocates memory for an array of integers, initializing all elements to zero
* @param n - number of positions to be allocated
* @return pointer to the allocated memory
*/
int* alloc_and_init_dyn_int_array(int n){


    return (int*) calloc( n, sizeof(int));


    //pode também fazer malloc: return (int*)malloc(sizeof(int)*n);  Se usar o malloc, tem que inicializar a 0 depois com um ciclo!!!! usar sempre calloc.

    /*for( int i=0; i<20; i++){
        *(n+i) = 0;
    }
    return a;*/

}

/**
* prints dynamic int array
* @param pints - array to print
* @param n - number of elements in the array
*/
void print_dyn_int_array(int* pints, int n){

    for(int i=0; i<n; i++){

        printf("%d", *(pints+i));

    }

}

/**
* creates or resizes a dynamic int array.
* if pints is NULL, create and init new dyn int array
* else returns an array with newsize, initializing the empty positions to zero
* @param pints - array to create or resize
* @param size - current array size (Filled positions)
* @param newsize - new array size
* @return array with the same content of pints, but with newsize
*/
int* create_or_resize_dyn_int_array(int *pints, int size, int newsize){

    // solucao 1

    return realloc(pints, newsize); // se estiver nulo, faz o mesmo que um calloc

    // solucao 2 ( jeito trabalhoso )

    // int *aux = (int*) calloc( newsize, sizeof(int));
    // for( int i =0; i < size; i++){
    // *(aux+i) = *(pints+i);
    // return aux;
    // tem sempre que limpar!!! limpar pints: free(pints);
    // return aux;
}

/**
* trims and copies the content of static array str to a new dynamic array
* @param str - static string
* @return trimed string
* i.e. input: char * with 8 elements ((a, b, c, \0, 0, 0, 0, 0)); output: char * with 4 elements (a, b, c, \0)
*/
char* create_copy_dyn_string(char str[]){

    // feito pelo prof

    char *aux = (char*) malloc( sizeof(char)*strlen(str)+1);
    strcpy(aux, str);
    return aux;

 /*   int j = strlen(str);

    int *k = NULL;

    k = alloc_dyn_int_array(j);

    for( int i=0; i < j; i++){
        *(k+i) = str[i];
    }
    return k;                */

}

/**
* Fills a static array of strings with dynamic stdin retreived strings.
* create_copy_dyn_string should be used to trim the stdin read string
* @param astr - static (and empty) array of strings
* @param size - size of astr
* @return filled astr
*/
char **read_array_dyn_strings(char *astr[], int size) {

    // char** char* char
    // fazer isso de um modo que o size não seja estatico.

    char aux[200] = "";
    printf(" Insira %d frases\n: ", size);
    for (int i = 0; i < size; i++) {

        fgets(aux, sizeof(aux), stdin);
        aux[strlen(aux) - 1] = '\0'; // overide ao /n por causa do enter.
        astr[i] = create_copy_dyn_string(aux);

    }

    return astr;

}

/**
* Fills a dynamic array of strings with dynamic stdin retreived strings.
* create_copy_dyn_string should be used to trim the stdin read string
* @param astr - dynamic (and empty) array of strings
* @return filled astr
*/
char** read_dyn_array_dyn_strings(char ** astr, int * size);


#endif /* pr07_h */