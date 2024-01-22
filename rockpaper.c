#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char chance(int move)
{
    char write[9];
    if (move == 1)
    {
        strcpy(write, "ROCK");
    }
    else if (move == 2)
    {
        strcpy(write, "PAPER");
    }
    else
    {
        strcpy(write, "SCISSORS");
    }
    return write;
}
int main()
{
    int player, comp, round, computer, you;
    char name[30];
    printf("Enter your name: ");
    gets(name);
    printf("HELLO ");
    puts(name);
    for (round = 1, you = 0, computer = 0; round <= 3; round++)
    {
        printf("\nROUND %d\n", round);
        // Taking Player's input
        printf("Press 1 for ROCK, 2 for PAPER, 3 for SCISSORS: ");
        scanf("%d", &player);
        printf("YOU: %s", chance(player));
        // Generating computer's input
        srand(time(NULL));
        comp = rand() % 3;
        printf("\nComputer: %s\n", chance(comp));
        //Result
        if ((comp == 0 && player == 3) || (comp == 1 && player == 1) || (comp == 2 && player == 2))
        {
            computer++; //COMPUTER WON
        }
        else if ((player == 1 && comp == 2) || (player == 2 && comp == 0) || (player == 3 && comp == 1))
        {
            you++; //player WON
        }
        else //(player == comp)
        {
            continue;//DRAW
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