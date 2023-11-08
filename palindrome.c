//Enter a number and check whether the number is pallindrome or not
#include<stdio.h>
int main()
{
    int n,r=0;
    printf("Enter a number a: ");
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        r=n%10+r*10;
        n=n/10;
    }
    if(r==a)
    {
        printf("Number is a Palindrome");
    }    
    else
    {
        printf("Number is not a palindrome");
    }
}   