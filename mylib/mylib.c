#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void state(int q0, int q1, int i1, int i2, int* Q0, int* Q1){
    *Q0 = (!i1) & q0 & (!q1) | i1 & (!i2) & (!q0) | i1 & (!i2) & (!q0) | (!i1) & i2 & (!q0) & q1;
    *Q1 = (!i2) & (!q0) & q1 | (!i1) & i2 & (!q1) | i1 & (!i2) & q0 & (!q1);
}

void output(int q0, int q1, int i1, int i2, int* o0){
    *o0 = (!i1) & q0 & q1 | i1 & (!i2) & q0 & q1;
}
