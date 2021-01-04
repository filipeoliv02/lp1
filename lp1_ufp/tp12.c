//
//  tp12.c
//  lp1_ufp
//
//  Created by Rui on 31/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#include "tp12.h"
#include "pr10.h"

/*
 FILE * fopen ( const char * filename, const char * mode );
  - filename: C string containing the name of the file to be opened. Its value shall follow the file name specifications of the running environment and can include a path (if supported by the system).
  - mode: C string containing a file access mode, e.g.:
    "r"	    read: Open file for input operations (file must exist).
    "w"	    write: Create an empty file for output (overrides any content).
    "a"	    append: Open file for output at end (overrides); repositioning operations ignored (fseek, fsetpos, rewind);
    "r+"	read/update: Open file for both input and output (file must exist).
    "w+"	write/update: Create an empty file for both input and output (overrides any content).
    "a+"	append/update: Open a file for both input and output;
                Output done at end of file (append); input at any position (via fseek, fsetpos, rewind);
    The mode string may also specify the type of file (text - implicit or binary):
        Default type is 'text' (may also be specified by 't').
        Type 'binary' must be specified through 'b'.
        This additional "b" can either be appended at end of mode string:
            e.g. "rb", "wb", "ab", "r+b", "w+b", "a+b"
        or inserted between the letter and the "+" sign for the mixed modes:
            e.g. "rb+", "wb+", "ab+")
 */

int main_tp12(int argc, const char * argv[])
{
    // insert your test code here...
    printf("main_tp12():...\n");
    char filename[]="/Users/rui/Documents/XCodeProjects/lp1_ufp/data/rects.txt";
    
    DYNARRAYRECTS dar = {NULL, 0};
    
    /*
    RECTANGLE r1={{0,1},{1,0}}, r2={{1,2},{2,1}};
    
    create_dyn_array_rects(&dar, 10);
    insert_rect_dyn_array_rects(dar, r1);
    insert_rect_dyn_array_rects(dar, r2);
    print_dyn_array_rects(dar);
    save_dyn_array_rects_txt(dar, filename);
    */
    
    read_dyn_array_rects_txt(&dar, filename);
    print_dyn_array_rects(dar);
    
    return 0;
}

//Desenvolver as funções:
void create_dyn_array_rects(DYNARRAYRECTS *pdar, int numberOfRectangles)
{
    pdar->prects=calloc(sizeof(RECTANGLE), numberOfRectangles);
    pdar->size=numberOfRectangles;
    
    /*
    RECTANGLE r0 = {{0,0},{0,0}};
    
    pdar->prects=malloc(sizeof(RECTANGLE)*numberOfRectangles);
    pdar->size=numberOfRectangles;

    RECTANGLE *pr = pdar->prects;
    for(int i=0; i<numberOfRectangles; i++)
    {
        *(pr+i)=r0;
    }
    */
}

// estas duas funções facilitam a vida... evita repetir código
void print_rectangle(int i, RECTANGLE r)
{
    printf("Rectangle[%d]={(%d,%d),(%d,%d)}\n", i, r.downpt.x, r.downpt.y, r.uppt.x, r.uppt.y);
}

void print_dyn_array_rects(DYNARRAYRECTS dar)
{
    puts("");
    for (int i =0 ; i< dar.size; i++)
    {
        print_rectangle(i, *(dar.prects+i));
    }
    puts("");
}

//Returns 0 if the two rectangles have the same coordinates
int rectanle_compare(RECTANGLE r1, RECTANGLE r2)
{
    return (r1.downpt.x==r2.downpt.x &&
            r1.downpt.y==r2.downpt.y &&
            r1.uppt.x==r2.uppt.x &&
            r1.uppt.y==r2.uppt.y);
}

void insert_rect_dyn_array_rects(DYNARRAYRECTS dar, RECTANGLE rect)
{
    RECTANGLE *prect = dar.prects, r0={{0,0},{0,0}};

    //Look for empty position and insert rect
    for(int i=0; i<dar.size;i++)
    {
        //...
    }
    printf("insert_rect_dyn_array_rects(): dar.prects overflow = %d!!\n", dar.size);
}

void read_dyn_array_rects_txt(DYNARRAYRECTS *pcs, char filename[])
{
    FILE *fp=NULL;
    RECTANGLE *prect = NULL;
    
    fprintf(stdout, "read_dyn_array_rects_txt(%s): reading rectangles...\n", filename);
    
    if((fp=fopen(filename, "r"))==NULL)
    {
        printf("save_dyn_array_rects_txt(): error opening file %s on r mode\n", filename);
        return;
    }
    int size = 0;
    char auxStr[200]="";
    
    // Line format: "rectangles: 10"
    // i)   ignore string   -> %*s (until 1st white char)
    //...

    //Create dyn array...
    
    prect = pcs->prects;
    for(int i=0;i<pcs->size;i++)
    {
        // Line format: "rect 0: 0 0 1 1"
        // i)   read until ':' (everything not ':') -> %[^:]
        // ii)  ignore ':'                          -> %*[:]
        //...
    }
    fprintf(stdout, "read_dyn_array_rects_txt(%s): closing file\n", filename);
    fclose(fp);
}

void save_dyn_array_rects_txt(DYNARRAYRECTS cs, char filename[])
{
    FILE *fp=NULL;
    RECTANGLE *prect = cs.prects;
    
    fprintf(stdout, "save_dyn_array_rects_txt(%s): saving rectangles...\n", filename);
    
    if((fp=fopen(filename, "w"))==NULL)
    {
        fprintf(stdout, "save_dyn_array_rects_txt(): error opening file %s on w mode\n", filename);
        return;
    }
    
    //Write number of rectangles
    //...

    //Write each rectangle in a single line
    for(int i=0;i<cs.size;i++)
    {
        //...
    }
    fprintf(stdout, "save_dyn_array_rects_txt(%s): closing file\n", filename);
    fclose(fp);
}
