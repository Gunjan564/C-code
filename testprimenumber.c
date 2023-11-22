#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for ( i = 2; i < n; n/i,i++)
    {
       if (n%i==0)
       {
            printf("number is not prime");
            break;
       }
       else
       {
            printf("number is prime");
            break;
       }
    }
    return 0;
}