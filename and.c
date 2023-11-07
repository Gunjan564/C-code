//check whether the number is divisible by both 5 and 3
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number a: ");
    scanf("%d",&a); 
    if (a%5==0&&a%3==0)//if a/5=0 and a/3=0
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");

    }
    return 0;
}