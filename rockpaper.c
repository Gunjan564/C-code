#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    int player, comp, round, computer, you;
    char name[30], move[9];
    printf("Enter your name: ");
    gets(name);
    printf("HELLO ");
    puts(name);
    for (round = 1, you = 0, computer = 0; round <= 3; round++)
    {
        printf("\nROUND %d\n", round);
        printf("Press 1 for ROCK, 2 for PAPER, 3 for SCISSORS: ");
        scanf("%d", &player);
        if (player == 1)
        {
            strcpy(move, "ROCK");
        }
        if (player == 2)
        {
            strcpy(move, "PAPER");
        }
        if (player == 3)
        {
            strcpy(move, "SCISSORS");
        }
        printf("YOU: %s", move);
        srand(time(NULL));
        comp = rand() % 3;
        if (comp == 0)
        {
            strcpy(move, "ROCK");
        }
        if (comp == 1)
        {
            strcpy(move, "PAPER");
        }
        if (comp == 2)
        {
            strcpy(move, "SCISSORS");
        }
        printf("\nComputer: %s\n", move);
        // Computer wins
        if ((comp == 0 && player == 3) || (comp == 1 && player == 1) || (comp == 2 && player == 2))
        {
            // printf("COMPUTER WON");
            computer++;
        }
        if ((player == 1 && comp == 2) || (player == 2 && comp == 0) || (player == 3 && comp == 1))
        {
            // printf("YOU WON");
            you++;
        }
        if ((player == 1 && comp == 0) || (player == 2 && comp == 1) || (player == 3 && comp == 2))
        {
            // printf("DRAW");
            continue;
        }
    }
    printf("\n");
    if (computer > you)
    {
        printf("COMPUTER WON");
    }
    else if (you > computer)
    {
        printf("YOU WON");
    }
    else
        printf("DRAW");

    return 0;
}