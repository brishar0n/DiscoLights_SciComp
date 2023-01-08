#include <stdio.h>
#include <stdbool.h>
#include "mylib/mylib.h"

void clear() {
    printf("\033[H\033[J");
}

void reset() {
    printf("\033[0m");
} 

int main() {
  int q0 = 0, q1 = 0, Q0 = 0, Q1 = 0, o0 = 0, i1 = 0, i2 = 0;
  while (true) {
    if ((Q0 == 0) && (Q1 == 0)) {
      clear();
      printf("   /______________\\\n");
      printf("   |/__________\\  |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] | O |\n");
      printf("   || [ ] [ ] | 0 |\n");
      printf("   ||_________|   |\n");
      printf("   ||_________|   |\n");
      printf("   |______________|\n");
      printf(" \n");

    } 
    else if ((Q0 == 0) && (Q1 == 1)) {
      clear();
      printf("   /______________\\\n");
      printf("   |/__________\\  |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] | O |\n");
      printf("   || [ ] [ ] | 0 |\n");
      printf("   ||_________|   |\n");
      printf("   ||_________|   |\n");
      printf("   |______________|\n");
      printf(" \n");

    } 
    else if ((Q0 == 1) && (Q1 == 0)) {
      clear();
      printf("   /______________\\\n");
      printf("   |/__________\\  |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] | O |\n");
      printf("   || [ ] [ ] | 0 |\n");
      printf("   ||_________|   |\n");
      printf("   ||_________|   |\n");
      printf("   |______________|\n");
      printf(" \n");

    } 
    else if ((Q0 == 1) && (Q1 == 1)) {
      printf("   /______________\\\n");
      printf("   |/__________\\  |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] | O |\n");
      printf("   || [ ] [ ] | 0 |\n");
      printf("   ||_________|   |\n");
      printf("   ||___[ ]___|   |\n");
      printf("   |______________|\n");
      printf(" \n");
      printf("Item dispensed. Thank you for your purchase!\n");
    }
    
    printf("Type the input (0 for nothing | 1 for a dime | 2 for a nickel | 3 for both: ");
    int coin;
    scanf("%d", &coin);

    if (coin == 0) {
      i1 = 0;
      i2 = 0;
    } 
    else if (coin == 1) {
      i1 = 1;
      i2 = 0;
    } 
    else if (coin == 2) {
      i1 = 0;
      i2 = 1;
    } 
    else if (coin == 3) {
      i1 = 1;
      i2 = 1;
    } 
    else {
      i1 = 0;
      i2 = 0;
    }

    state(q0, q1, i1, i2, &Q0, &Q1);
    q0 = Q0;
    q1 = Q1;
    output(q0, q1, &o0);
  }
  return 0;
}
