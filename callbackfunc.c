#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
void HelloAndExecute(int(*ptr)(int,int))
{
    printf("Hello\n");
    printf("The sum of a and b is: %d",(*ptr)(3,5));
}
void ByeAndExecute(int(*ptr)(int,int))
{
    printf("Bye\n");
    printf("The sum of a and b is: %d",(*ptr)(3,5));
}
int main()
{
    int (*ptre)(int,int);
    ptre=sum;//can also be written as ptre=&sum
    ByeAndExecute(ptre);
}