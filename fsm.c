#include <stdio.h>
#include <stdbool.h>

void states(int s0, int s1, int b, int* S0, int* S1, int* O0) {
    *S0 = s1 & (!b);
    *S1 = (!s1) & (!b);
    *O0 = (!s1) & (!b);
}



void playing_music() {
    printf(" _____________________\n");
    printf("|                     |\n");
    printf("|        BABY         |\n");
    printf("|    JUSTIN BIEBER    |\n");
    printf("|       ||||          |\n");
    printf("|       || ||         |\n");
    printf("|       ||  ||        |\n");
    printf("|  <    ||   ||   >   |\n");
    printf("|       ||  ||        |\n");
    printf("|       || ||         |\n");
    printf("|       ||||          |\n");
    printf("|_____________________|\n");
    printf(" Music Player Playing\n");
}

void pause_music() {
    printf(" _____________________\n");
    printf("|                     |\n");
    printf("|        BABY         |\n");
    printf("|    JUSTIN BIEBER    |\n");
    printf("|      ||    ||       |\n");
    printf("|      ||    ||       |\n");
    printf("|      ||    ||       |\n");
    printf("|  <   ||    ||   >   |\n");
    printf("|      ||    ||       |\n");
    printf("|      ||    ||       |\n");
    printf("|      ||    ||       |\n");
    printf("|_____________________|\n");
    printf(" Music Player Pause\n");
}


int main(void) {
    int s0 = 0, s1 = 0, b, o0 = 0;
    while (true) {
        printf("\033[2J");
        if (o0 == 0) {
            pause_music();
        } else {
            playing_music();
        }

        printf("Enter button input (0 for play/pause button // 1 for skip button): ");
        scanf("%d", &b);

        if (b == 0 || b == 1) {
            states(s0, s1, b, &s0, &s1, &o0);
        } else {
            printf("Please enter a proper input (0 or 1)\n");
        }
    }

    return 0;
}