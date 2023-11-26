#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for ( i = 2; i < n; n/i,i++)//n/i is not necessary. code will also work efficiently without it
    {
       if (n%i==0)
       {
            printf("Number is not prime");
            break;
       }
       else
       if (i==n-1)
       {
           printf("Number is prime");
       }
    }
    return 0;
}