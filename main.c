#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

void reset(){
    printf("\033[0m");
}

void OFF(){
    printf("______________________________________________\n");
    printf("                      |\n");
    printf("                      |\n");
    printf("                      |   \n");
    printf("                   .d  b.  \n");
    printf("                  d      b\n");
    printf("                 (        )  \n");
    printf("                  Y      Y\n");
    printf("                   `Y  Y'     \n");
    printf(" \n");
    printf("                                 \n");
    printf(" \n");
    printf("  -------\n");
    printf("  | OFF |\n");
    printf("  -------\n");
}
    
void ON(){
    printf("______________________________________________\n");
    printf("                      |\n");
    printf("                      |            .'\n");
    printf("                  \\   |   /\n");
    printf("               `.  .d88b.   .'\n");
    printf("                  d888888b\n");
    printf("      --     --  (88888888)  --\n");
    printf("                  Y888888Y\n");
    printf("              .'   `Y88Y'   `.\n");
    printf("                  /       \\\n");
    printf("           .'         !        `.\n");
    printf(" \n");
    printf("  -------\n");
    printf("  | ON  |\n");
    printf("  -------\n");
}

int main(void){
    int q0 = 0, q1 = 0, i, o0 = 0;
    while (true){
        printf("\033[2J"); // Clear screen 
        printf("\033[1;1H"); // Move cursor to upper left
        if (o0 == 0){
            OFF();
        } else{
            ON();
        }
        reset();

        printf("Type in your input (0 for not pressing the button // 1 for pressing the button): ");
        scanf("%d", &i);

        if (i == 0 || i == 1){
            states(q0, q1, o0, i, &q0, &q1, &o0);
        } else{
            printf("Please enter a valid input (0 or 1)\n");
        }
    }
    return 0;
}