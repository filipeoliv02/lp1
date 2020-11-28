#include "pr10.h"

int main_pr10(int argc, const char* argv[]) {
    RECT_QUEUE* rq;
    rq = create_rect_queue();
    POINT p1 = {1, 1}, p2 = {1, 3}, p3 = {4, 2}, p4 = {5, 3};
    enqueue_rectangle(rq, p1, p3);

    return 1;
}

RECT_QUEUE* create_rect_queue() {
    RECT_QUEUE* rq = (RECT_QUEUE*)malloc(sizeof(RECT_QUEUE));
    rq->phead = NULL;
    rq->ptail = NULL;
    return rq;
}

RECT_QUEUE_NODE* create_rect_queue_node(POINT downpt, POINT uppt) {
    RECT_QUEUE_NODE* rqn = (RECT_QUEUE_NODE*)malloc(sizeof(RECT_QUEUE_NODE));
    rqn->r.downpt.x = downpt.x;
    rqn->r.downpt.y = downpt.y;
    rqn->r.uppt.x = uppt.x;
    rqn->r.uppt.y = uppt.y;
    rqn->pnext = NULL;
    return rqn;
}

void enqueue_rectangle(RECT_QUEUE* rect_queue, POINT downpt, POINT uppt) {
    RECT_QUEUE_NODE* rqn = create_rect_queue_node(downpt, uppt);
    if (rect_queue->ptail == NULL) {
        rect_queue->phead = rqn;
        rect_queue->ptail = rqn;
        return;
    }
    rect_queue->ptail->pnext = rqn;
    rect_queue->ptail = rqn;
}

RECT_QUEUE_NODE* dequeue_rectangle(RECT_QUEUE* rect_queue) {
    RECT_QUEUE_NODE* rqn = rect_queue->phead;
    if (rect_queue->phead == NULL) return NULL;
    rect_queue->phead = rect_queue->phead->pnext;
    if (rect_queue->phead == NULL) rect_queue->ptail = NULL;
    return rqn;
}

