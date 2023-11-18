#include <stdio.h>

int main()
{
    int a=7;
    int* pt=&a;
    printf("hi%d",*pt);//value of the variable the adress of which 
    printf("\nhi%p",&a);
    printf("\nhi%p",&pt);
    printf("\nhi%p",pt);
    printf("\nhi%x\n",a);
    //%x is used to print hexadecimal value
    //%p is used to print address 
    return 0;
}