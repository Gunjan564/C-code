// pointer stores the address of operator
#include <stdio.h>
int main()
{
    int a = 9, b;
    int *pt = &a;
    int *ptra = NULL;
    int arr[]={1,2,3,4,5};
    int*poi=arr;
    int x=*&arr[2];
    int y=*&arr[3];
    printf("\n%u", &a);//address of variable a, %u is mentioned in book but showing a warning here
    printf("%d", *pt);// value of the variable the address of which stored in pointer
    printf("\n%p", &pt);//address of pointer pt
    printf("\n%p", pt);//address of variable a
    printf("\n%x", a);//value stored in a in hexadecimal form
    printf("\n%p", ptra);//value of null pointer
    printf("\n%p",pt+2);//address of the variable pointed by the pointer is increased by two bytes
    printf("\n%p",&a+2);//address of variable increased by two bytes
    printf("\n%d",*pt+2);//value stored in variable is increased by two bytes
    printf("\n%d",a+2);//value stored in variable is increased by two bytes
    printf("\n%x",*pt+2);//value stored in variable is increased by two bytes 
                         //and printed in hexadecimal
    printf("\n%p",poi);//address of first element of array
    printf("\n%p",&arr[2]);//address of element present at arr[2];
    printf("\n%p",&arr);//address of first element of array
    printf("\n%d",*poi);//value of first element of array
    printf("\n%d",poi[3]);//value of the element in array at arr[3]
    printf("\n%p",&x);//address of x
    printf("\n%d",x+y);
    //%x is used to print hexadecimal value
    //%p is used to print address
    return 0;
}
// NULL pointer - a pointer that is not assigned any value but NULL