//
//  tp10.h
//  lp1_ufp
//
//  Created by Rui on 31/10/17.
//  Copyright © 2017 Rui. All rights reserved.
//

#ifndef tp10_h
#define tp10_h

<<<<<<< HEAD
#include <stdio.h>
=======
#include <limits.h>
#include <stdio.h>

>>>>>>> 1b76458e6e06967d2cac4f975aafc1318affb1c9
#include "tp09.h"

/** Struct & Pointers:
 * Self-referencing
 * Cross-referencing
 */

<<<<<<< HEAD
typedef struct node_point
{
    struct pt info;
    //Self-referencing
    struct node_point *pdown;
}NODE_POINT;

typedef struct stack_node_points
{
    int nnodes;
    //Cross-referencing
    NODE_POINT *ptop;
} STACK_NODE_POINTS;


int is_empty(const STACK_NODE_POINTS* psnp);
void push_stack_node_points(STACK_NODE_POINTS *psnp, struct pt newpt);
struct pt pop_stack_node_points_copynode(STACK_NODE_POINTS* psnp);
NODE_POINT* pop_stack_node_points_refnode(STACK_NODE_POINTS* psnp);
struct pt peep_stack_node_points_copynode(const STACK_NODE_POINTS* psnp, int top_delta);
NODE_POINT* peep_stack_node_points_refnode(const STACK_NODE_POINTS* psnp, int top_delta);
void print_stack_node_points(const STACK_NODE_POINTS *psnp);


int main_tp10(int argc, const char * argv[]);

=======
typedef struct node_point {
    struct pt info;
    // Self-referencing
    struct node_point* pdown;
} NODE_POINT;

typedef struct stack_node_points {
    int nnodes;
    // Cross-referencing
    NODE_POINT* ptop;
} STACK_NODE_POINTS;

int is_empty(const STACK_NODE_POINTS* psnp);
void push_stack_node_points(STACK_NODE_POINTS* psnp, struct pt newpt);
struct pt pop_stack_node_points_copynode(STACK_NODE_POINTS* psnp);
NODE_POINT* pop_stack_node_points_refnode(STACK_NODE_POINTS* psnp);
struct pt peep_stack_node_points_copynode(const STACK_NODE_POINTS* psnp,
                                          int top_delta);
NODE_POINT* peep_stack_node_points_refnode(const STACK_NODE_POINTS* psnp,
                                           int top_delta);
void print_stack_node_points(const STACK_NODE_POINTS* psnp);

int main_tp10(int argc, const char* argv[]);
>>>>>>> 1b76458e6e06967d2cac4f975aafc1318affb1c9

#endif /* tp10_h */
