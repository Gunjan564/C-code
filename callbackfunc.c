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
void anymore(int a,int b)
{
    printf("\nAnymore\n");
    printf("The sum of 9 and 11 is: %d",sum(a,b));
}
int main()
{
    int (*ptre)(int,int);
    ptre=sum;//can also be written as ptre=&sum
    ByeAndExecute(ptre);
    printf("\n%d",ptre);
    printf("\n%d\n",*ptre);  
    ByeAndExecute(ptre);
    printf("\n");
    ByeAndExecute(sum);
    anymore(3,5);
    return 0;
}