#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "mylib/mylib.h"

void closed() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|  _____________      |\n");
    printf("| |             | 0 0 |\n");
    printf("| |          |  | 0 0 |\n");
    printf("| |          |  |     |\n");
    printf("| |_____________|  3  |\n");
    printf("|_____________________|\n");
    printf("  Door is closed   \n");
}

void opened() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|   ____________      |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            |     |\n");
    printf("| ||____________|  3  |\n");
    printf("|_____________________|\n");
    printf("  Door is opened   \n");
}

void cooking1() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|   ____________      |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            |     |\n");
    printf("| ||____________|  3  |\n");
    printf("|_____________________|\n");
    printf("  Cooking   \n");
}

void cooking2() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|   ____________      |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            |     |\n");
    printf("| ||____________|  2  |\n");
    printf("|_____________________|\n");
    printf("  Cooking   \n");
}

void cooking3() {
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|   ____________      |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            | 0 0 |\n");
    printf("| ||            |     |\n");
    printf("| ||____________|  1  |\n");
    printf("|_____________________|\n");
    printf("  Cooking   \n");
}

int main(void) {
    int s0 = 0, s1 = 0, D, T, M = 0;
    while (true) {
        printf("\033[2J");
        printf("\033[1;1H");
        if (s0 == 0 && s1 == 0) {
            opened();
        } else if ( s0 == 0 && s1 ==  1){
            closed();
        } else if ( s0 == 1 && s1 ==  0){
            int i;
            for (i = 3; i > 0; i--){
                if (i == 3){
                    cooking1();
                } else if (i == 2){
                    cooking2();
                } else if (i == 1){
                    cooking3();
                }
                sleep(1);
                printf("\033[2J");
                printf("\033[1;1H");
            }
        } 
        printf("Enter input (0 to open the door // 1 to close the door): ");
        scanf("%d", &D);
        printf("Enter button input (0 to stop the timer // 1 to start the timer): ");
        scanf("%d", &T);


        if (D == 0 || D == 1 && T == 0 || T == 1) {
            states(s0, s1, D, T, &s0, &s1, &M);
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }
    return 0;
}