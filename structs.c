#include "structs.h"

struct pt p1 = {1, 1}, p2 = {2, 3};

RECT r1 = {{1, 1}, {2, 3}};

void print_pt(char label_pt[], struct pt p) {
  printf("%s:(%d, %d)\n", label_pt, p.x, p.y);
}

int compare_pts(struct pt p1, struct pt p2) {
  return (p1.x == p2.x && p1.y == p2.y);
}

struct pt sum_pts(struct pt p1, struct pt p2) {
  p1.x += p2.x;
  p1.y += p2.y;
  return p1;
}

void print_rects(char label_rect[], RECT r) {
  printf("%s:", label_rect);
  print_pt("downpt", r.downpt);
  print_pt("uppt", r.uppt);
}

int compare_rects(RECT r1, RECT r2) {
  return (compare_pts(r1.downpt, r2.downpt) && compare_pts(r1.uppt, r2.uppt));
}

struct pt *create_pt(struct pt p) {
  struct pt *pp = (struct pt *)malloc(sizeof(struct pt));
  /* Alternativas:
  pp->x = p.x;
  pp->y = p.y;

  (*pp).x = p.x;
  (*pp).y = p.y;*/
  (*pp) = p;
  return pp;
}

RECT *create_rect(RECT r) {
  RECT *pr = (RECT *)calloc(1, sizeof(RECT));
  *pr = r;
  /* pr->downpt.x = r.downpt.x;
  pr->downpt.y = r.downpt.y;
  (*pr).uppt.x = r.uppt.x;
  (*pr).uppt.y = r.uppt.y; */
  return pr;
}

void print_pt2(char label_pt[], struct pt *pp) {
  printf("%s: (%d, %d)\n", label_pt, pp->x, (*pp).y);
}

void print_rect2(char label_rect[], RECT *pr) {
  printf("%s", label_rect);
  print_pt2("Downpt:", &(pr->downpt));
  print_pt2("Uppt:", &((*pr).uppt));
}

void read_pt(struct pt *pp) { scanf("%d %d", &(pp->x), &((*pp).y)); }

void read_rect(RECT *pr) {
  read_pt(&(pr->downpt));
  read_pt(&(*pr).downpt);
}
