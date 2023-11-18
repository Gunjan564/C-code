#include <stdio.h>

int main()
{
    int a=7;
    int* pt=&a;
    printf("hi%d",*pt);
    printf("\nhi%p",&a);
    printf("\nhi%p",&pt);
    printf("\nhi%p",pt);
    printf("\nhi%x\n",a);
    return 0;
}