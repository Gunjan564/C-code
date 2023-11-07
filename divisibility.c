//check whether the number is divisible by 5 or 3 but not 15
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number a: ");
    scanf("%d",&a); 
    if (a%5==0||a%3==0&&a%15!=0)//if a/5=0 or a/3=0
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");

    }
    return 0;
}