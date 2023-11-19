// pointer stores the address of operator
#include <stdio.h>
int main()
{
    int a = 7, b;
    int *pt = &a;
    int *ptra = NULL;
    printf("hi%d", *pt);   // value of the variable the address of which stored in pointer
    printf("\nhi%p", &a);  // address of variable a
    printf("\nhi%p", &pt); // address of pointer pt
    printf("\nhi%p", pt);   // address of variable a
    printf("\nhi%x", a);    // value stored in a in hexadecimal form
    printf("\nhi%p", ptra); // value of null pointer
    
    //%x is used to print hexadecimal value
    //%p is used to print address
    printf("");
    return 0;
}
// NULL pointer - a pointer that is not assigned any value but NULL