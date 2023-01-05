#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool zero_cents = true;
  bool five_cents = false;
  bool ten_cents = false;
  bool fifteen_cents = false;
  int coin_value = 0; // 0 for a nickel, 1 for a dime
  
  while (true) {
    // Combinational logic to determine the state of the vending machine
    zero_cents = !five_cents && !ten_cents && !fifteen_cents;
    five_cents = !ten_cents && !fifteen_cents && coin_value == 0;
    ten_cents = !fifteen_cents && (coin_value == 0 || coin_value == 1);
    fifteen_cents = (coin_value == 0 || coin_value == 1);

    // void states(int q0, int q1, int o0, int D, int N, int* Q0, int* Q1, int* O0){
    // *Q0 = D | q1 & (!q0) | N & (!q1) & q0;
    // *Q1 = N & (!q0) | N & q1 |(!N) & (!q1) & q0 | D & q1 & (!q0);
    // *O0 = q1 & q0;
    
    if (zero_cents) {
      printf("   /______________\\\n");
      printf("   |/__________\\  |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] |   |\n");
      printf("   || [ ] [ ] | O |\n");
      printf("   || [ ] [ ] | 0 |\n");
      printf("   ||_________|   |\n");
      printf("   ||_________|   |\n");
      printf("   |______________|\n");
      printf("Welcome to Bri's 15c Gum Vending Machine!\n");
      printf("Insert a coin (0 for a nickel and 1 for a dime): ");
      scanf("%d", &coin_value);
      printf(" \n");

      if (coin_value == 0) {
        printf("Total inserted: %d cents\n", coin_value == 0 ? 5 : 10);
        printf("Insert another coin (0 for a nickel and 1 for a dime): ");
        scanf("%d", &coin_value);
        printf(" \n");

        if (coin_value == 0) {
          printf("Total inserted: 10 cents\n");
          printf("Insert another coin (0 for a nickel and 1 for a dime): ");
          scanf("%d", &coin_value);
          printf(" \n");

          if (coin_value == 0) {
            printf("   /______________\\\n");
            printf("   |/__________\\  |\n");
            printf("   || [ ] [ ] |   |\n");
            printf("   || [ ] [ ] |   |\n");
            printf("   || [ ] [ ] | O |\n");
            printf("   || [ ] [ ] | 0 |\n");
            printf("   ||_________|   |\n");
            printf("   ||___[ ]___|   |\n");
            printf("   |______________|\n");
            printf("Total inserted: 15 cents\n");
            printf("Item dispensed. Thank you for your purchase!\n");
            zero_cents = true;
            five_cents = false;
            ten_cents = false;
            fifteen_cents = false;
            coin_value = 0;
            printf(" \n");

          } else if (coin_value == 1) {
            printf("   /______________\\\n");
            printf("   |/__________\\  |\n");
            printf("   || [ ] [ ] |   |\n");
            printf("   || [ ] [ ] |   |\n");
            printf("   || [ ] [ ] | O |\n");
            printf("   || [ ] [ ] | 0 |\n");
            printf("   ||_________|   |\n");
            printf("   ||___[ ]___|   |\n");
            printf("   |______________|\n");
            printf("Total inserted: 20 cents\n");
            printf("Item dispensed. Thank you for your purchase!\n");
            zero_cents = true;
            five_cents = false;
            ten_cents = false;
            fifteen_cents = false;
            coin_value = 0;
            printf(" \n");
          }
          
        } else if (coin_value == 1) {
          printf("   /______________\\\n");
          printf("   |/__________\\  |\n");
          printf("   || [ ] [ ] |   |\n");
          printf("   || [ ] [ ] |   |\n");
          printf("   || [ ] [ ] | O |\n");
          printf("   || [ ] [ ] | 0 |\n");
          printf("   ||_________|   |\n");
          printf("   ||___[ ]___|   |\n");
          printf("   |______________|\n");
          printf("Total inserted: 15 cents\n");
          printf("Item dispensed. Thank you for your purchase!\n");
          zero_cents = true;
          five_cents = false;
          ten_cents = false;
          fifteen_cents = false;
          coin_value = 0;
          printf(" \n");
        } else {
              printf("Invalid coin. Please insert a dime (type 0) or a nickel (type 1).\n");
        }

      } else if (coin_value == 1) {
        printf("Total inserted: 10 cents\n");
        printf("Insert another coin (0 for a nickel and 1 for a dime): ");
        scanf("%d", &coin_value);
        printf(" \n");

        if (coin_value == 0) {
          printf("   /______________\\\n");
          printf("   |/__________\\  |\n");
          printf("   || [ ] [ ] |   |\n");
          printf("   || [ ] [ ] |   |\n");
          printf("   || [ ] [ ] | O |\n");
          printf("   || [ ] [ ] | 0 |\n");
          printf("   ||_________|   |\n");
          printf("   ||___[ ]___|   |\n");
          printf("   |______________|\n");
          printf("Total inserted: 15 cents\n");
          printf("Item dispensed. Thank you for your purchase!\n");
          zero_cents = true;
          five_cents = false;
          ten_cents = false;
          fifteen_cents = false;
          coin_value = 0;
          printf(" \n");
        } else if (coin_value == 1) {
          printf("   /______________\\\n");
          printf("   |/__________\\  |\n");
          printf("   || [ ] [ ] |   |\n");
          printf("   || [ ] [ ] |   |\n");
          printf("   || [ ] [ ] | O |\n");
          printf("   || [ ] [ ] | 0 |\n");
          printf("   ||_________|   |\n");
          printf("   ||___[ ]___|   |\n");
          printf("   |______________|\n");
          printf("Total inserted: 20 cents\n");
          printf("Item dispensed. Thank you for your purchase!\n");
          zero_cents = true;
          five_cents = false;
          ten_cents = false;
          fifteen_cents = false;
          coin_value = 0;
          printf(" \n");
        } else {
          printf("Invalid coin. Please insert a dime (type 0) or a nickel (type 1).\n");
          }
      }
    } else {
      printf("Invalid coin. Please insert a dime (type 0) or a nickel (type 1).\n");
      }
  }
}
