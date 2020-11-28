#ifndef pr10_h
#define pr10_h

#include <stdio.h>
#include <stdlib.h>

#include "pr09.h"

typedef struct rectangle {
  struct point downpt, uppt;
} RECTANGLE;

typedef struct rect_queue_node {
  RECTANGLE r;
  struct rect_queue_node* pnext;
} RECT_QUEUE_NODE;

typedef struct rect_queue {
  RECT_QUEUE_NODE *phead, *ptail;
} RECT_QUEUE;

int main_pr10(int argc, const char* argv[]);

/**
 * Inits a rectangle queue
 * @return - pointer to the created RECT_QUEUE
 */
RECT_QUEUE* create_rect_queue();

/**
 * Inits a rectangle queue node
 * @param downpt - rectangle's downpt
 * @param uppt - rectangle's uppt
 * @return pointer to the created queue node
 */
RECT_QUEUE_NODE* create_rect_queue_node(POINT downpt, POINT uppt);

/**
 * Adds a rectangle node to the rectangles queue (FIFO)
 * Enqueue at tail
 * @param rect_queue queue of rectangles
 * @param downpt - rectangle's down point
 * @param uppt - rectangle's up point
 */
void enqueue_rectangle(RECT_QUEUE* rect_queue, POINT downpt, POINT uppt);

/**
 * Removes a rectangle node from the rectangles queue (FIFO)
 * Dequeue at head
 * @param rect_queue queue of rectangles
 * @return removed rectangle queue node
 */
RECT_QUEUE_NODE* dequeue_rectangle(RECT_QUEUE* rect_queue);

/**
 * prints a given rectangle queue
 * @param rqu - rectangle queue to be printed
 */
void print_rect_queue(RECT_QUEUE* rqu);

/**
 * Dequeus and prints the area of each rectangle node in a given rectangle queue
 * @param rqu - rectangle queue
 */
void get_rect_queue_node_area(RECT_QUEUE* rqu);

#endif /* pr10_h */
