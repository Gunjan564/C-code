#include <stdio.h>
int factorial(int number)
{
    if(number==0||number==1)
    return 1;
    else
    return (number*factorial(number-1));
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of %d is: %d",n,factorial(n));
    return 0;
}