//
//  tp12.h
//  lp1_ufp
//
//  Created by Rui on 31/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp12_h
#define tp12_h

#include <stdio.h>
#include "pr10.h"

/**
 * =================================================
 * FILE structure (contains fields decribing the state of a file stream, e.g. eof, etc.):
 typedef struct _iobuf
 {
 char*   _ptr;
 int _cnt;
 char*   _base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char*   _tmpfname;
 } FILE;
 * =================================================
 * //Abertura de ficheiros c/ diferentes tipos + modos de leitura - funções de manipulação base:
 * FILE *fp = fopen("path", "type & mode");
 *      //Type: t (text - default); b (binary)
 *      //Mode: "rwa" (read/write/append text) | "wrab" (read/write/append binary)
 * fclose(fp); //Libertar recursos no SO
 * =================================================
 * Ficheiros de texto:
 *  - input:
 *      fscanf(fp, "%d %s...", &i, str, ...);
 *      fgets(str, MAX, fp);
 *      c = fgetc();
 *  - output:
 *      fprintf(fp, "%d %s...",  i, str, ...);
 *      fputs("...", fp);
 *      fputc(c, fp);
 * =================================================
 * Ficheiros binários:
 *  - input:
 *      size_t fread(void * ptr, size_t size, size_t count, FILE * stream);
 *      e.g. fread(&v, sizeof(v), n, fp);
 * - output:
 *      size_t fwrite(const void * ptr, size_t size, size_t count, FILE * stream);
 *      fwrite(&v, sizeof(v), n, fp);
 * =================================================
 */


typedef struct dynarrayrects
{
    RECTANGLE *prects;
    int size;
} DYNARRAYRECTS;

//Criar um array dinâmico com o tamanho especificado
void create_dyn_array_rects(DYNARRAYRECTS *pdar, int numberOfRectangles);

//Imprime rectangulo na consola.
void print_rectangle(int i, RECTANGLE r);

//Imprime no sdtout as coordenadas de todos os rectangulos do array
void print_dyn_array_rects(DYNARRAYRECTS dar);

//Returns 0 if the two rectangles have the same coordinates
int rectanle_compare(RECTANGLE r1, RECTANGLE r2);


/**
 * Inserir um rectangulo no array dinâmico de rectangulos.
 * @param dar - copia do array dinâmico de rectangulos.
 * @param rect - dados do rectangulo a inserir.
 */
void insert_rect_dyn_array_rects(DYNARRAYRECTS dar, RECTANGLE rect);

/**
 * Leitura de dados correspondentes a vários rectângulos armazenados num ficheiro de texto.
 * @param pcs - apontador para array dinâmico de rectangulos.
 */
void read_dyn_array_rects_txt(DYNARRAYRECTS *pcs, char filename[]);

/**
 * Escrita de dados dos vários rectângulos, armazenados num array dinâmico, para um ficheiro de texto.
 * @param cs - array dinâmico de rectangulos.
 * @param filename - path do ficheito de texto para output.
 */
void save_dyn_array_rects_txt(DYNARRAYRECTS cs, char filename[]);
                                                
/**
 * Funcção de teste da aula tp12.
 */
int main_tp12(int argc, const char * argv[]);


#endif /* tp12_h */
