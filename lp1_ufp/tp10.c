#include "tp10.h"

int main_tp10(int argc, const char* argv[]) {
    struct pt pt1 = {0, 0}, pt2 = {1, 1};
    STACK_NODE_POINTS stack1 = {0, NULL};

    push_stack_node_points(&stack1, pt1);
    push_stack_node_points(&stack1, pt2);
    struct pt pt3 = pop_stack_node_points_copynode(&stack1);
    NODE_POINT* pnp1 = pop_stack_node_points_refnode(&stack1);
    if (pnp1 != NULL) {
        free(pnp1);
    }
    return 1;
}

int is_empty(const STACK_NODE_POINTS* psnp) {
    return (psnp->nnodes == 0 && psnp->ptop == NULL);
}

void push_stack_node_points(STACK_NODE_POINTS* psnp, struct pt newpt) {
    NODE_POINT* pnp = (NODE_POINT*)malloc(sizeof(NODE_POINT));
    pnp->info = newpt;
    pnp->pdown = psnp->ptop;
    psnp->ptop = pnp;
    psnp->nnodes++;
}

struct pt pop_stack_node_points_copynode(STACK_NODE_POINTS* psnp) {
    struct pt pt = {INT_MAX, INT_MAX};
    if (is_empty(psnp)) return pt;
    NODE_POINT* pnp = psnp->ptop;
    pt = psnp->ptop->info;
    psnp->ptop = psnp->ptop->pdown;
    psnp->nnodes--;
    free(pnp);
    return pt;
}

NODE_POINT* pop_stack_node_points_refnode(STACK_NODE_POINTS* psnp) {
    NODE_POINT np = {{INT_MAX, INT_MAX}, NULL};
    struct pt pt = {INT_MAX, INT_MAX};
    if (is_empty(psnp)) return NULL;
    NODE_POINT* pnp = psnp->ptop;
    np = *pnp;
    psnp->ptop = pnp->pdown;
    psnp->nnodes--;
    pnp->pdown = NULL;
    return pnp;
}

struct pt peep_stack_node_points_copynode(const STACK_NODE_POINTS* psnp,
                                          int top_delta) {
    struct pt pt = {INT_MAX, INT_MAX};

    if (is_empty(psnp) && top_delta >= psnp->nnodes) {
        return pt;
    }
    NODE_POINT* pnp = psnp->ptop;
    int i = 0;
    while (i < top_delta && pnp != NULL) {
        pnp = pnp->pdown;
        i++;
    }
    return pnp->info;
}

