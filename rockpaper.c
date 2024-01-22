// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
    // Write C code here
    int n;
    char name[30];
    printf("Hello world\n");
    srand(time(NULL));
    printf("Your no. is: %d\n",rand()%4);
    printf("Enter your name: ");
    gets(name);
    printf("HELLO ");
    puts(name);
    printf("Press 1 for ROCK, 2 for 2, 3 for SCISSORS");
    scanf("%d",&n);
    
    return 0;
}