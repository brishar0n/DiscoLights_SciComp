#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void state(int q0, int q1, int i1, int i2, int* Q0, int* Q1){
    *Q0 = i1 | q1 & (!q0) | i2 & (!q1) & q0;
    *Q1 = i2 & (!q0) | i2 & q1 |(!i2) & (!q1) & q0 | i1 & q1 & (!q0);
}

void output(int q0, int q1, int* o0){
    *o0 = q1 & q0;
}