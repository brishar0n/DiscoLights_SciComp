#include <stdio.h>

// Implementing function using the combinational boolean equations
void states(int q0, int q1, int o0, int i, int* Q0, int* Q1, int* O0){
    *Q0 = i;
    *Q1 = q1 & i | (!q0) & q1 | q0 & (!q1) & (!i);
    *O0 = (!q1) & i | q0 & (!q1) | (!q0) & q1 & (!i);
}


// void states(int q0, int q1, int o0, int b, int* Q0, int* Q1, int* O0){
//     *Q0 = q0;
//     *SQ1 = q1;
//     *O0 = o0;