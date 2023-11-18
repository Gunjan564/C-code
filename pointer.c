//pointer stores the address of operator 
#include <stdio.h>

int main()
{
    int a=7;
    int* pt=&a;
    printf("hi%d",*pt);//value of the variable the address of which stored in pointer
    printf("\nhi%p",&a);//address of variable a
    printf("\nhi%p",&pt);//address of pointer pt
    printf("\nhi%p",pt);//address of variable a 
    printf("\nhi%x\n",a);//value stored in a in hexadecimal form
    //%x is used to print hexadecimal value
    //%p is used to print address 
    return 0;
}
//NULL pointer 