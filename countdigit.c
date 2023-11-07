//count digits of input number using for loop
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for ( int i=1;n!=0;n=n/10,i++)
    {
     printf("%d Digit number ",i);
    } 
     
return 0;
}