#include "pr09.h"

int main_pr09(int argc, char const *argv[]) {
    int size;
    POINT *appts;
    appts = (POINT *)malloc(sizeof(POINT) * size);

    return 1;
}

void read_array_points(POINT *apts, int size) {
    for (int i = 0; i < size; i++) scanf("%d %d", &(apts[i].x), &(apts[i].y));
}

void print_array_points(POINT *apts, int size) {
    for (int i = 0; i < size; i++)
        printf("(%d, %d)", (*(apts + i)).x, (*(apts + i)).y);
}

void translation_dyn_array_points(POINT *ppts, int size, POINT delta) {
    for (int i = 0; i < size; i++) {
        (*(ppts + i)).x += delta.x;
        (ppts + i)->y += delta.y;
    }
}

CIRCLE *read_dyn_array_circles(CIRCLE *cpts, int size) {
    cpts = (CIRCLE *)calloc(size, sizeof(CIRCLE));
    CIRCLE *c = cpts;
    for (int i = 0; i < size; i++) {
        scanf("%d %d %d", &c->p.x, &c->p.y, &c->radius);
        c++;
    }
    return cpts;
}
