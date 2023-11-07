//count digits of input number using while loop
#include<stdio.h>

int main()
{
    int s,i=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n!=0)
    {
       n=n/10;
       i=n%10;
       s=s+i;
     printf("%d Digit number ",i); 
    }
    printf("%d Digit number ",i); 
     
return 0;
}