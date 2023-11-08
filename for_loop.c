//printing a value with the help of loop
#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many times you want to print HELLO WORLD: ");
    scanf("%d",&n);
    for ( int i=1;i<=n;i++)
    {
        printf("\nHELLO WORLD");
    }
return 0;
}