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
  int q0 = 0, q1 = 0, i1 = 0, i2 = 0, Q0 = 0, Q1 = 0, o0 = 0;
  while (true) {
    if (o0 == 1) {
      clear();
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
      printf(" \n");

    } 
    else {
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
    reset();

    printf("Click 0 (reset) if you're done using the vending machine.\n");
    printf("Type the input (1 for a nickel (5c) | 1 then 2 / 2 then 1 for nickel and dime): ");
    int coin;
    scanf("%d", &coin);

    if (coin == 1) {
      i1 = 0;
      i2 = 1;
    } 
    else if (coin == 2) {
      i1 = 1;
      i2 = 0;
    } 
    else {
      i1 = 0;
      i2 = 0;
    }

    state(q0, q1, i1, i2, &Q0, &Q1);
    q0 = Q0;
    q1 = Q1;
    output(q0, q1, i1, i2, &o0);
  }
  return 0;
}
