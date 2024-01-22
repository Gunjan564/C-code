// pointer stores the address of operator
#include <stdio.h>
int main()
/*{
    int a = 9, b;
    int *pt = &a;
    int *ptra = NULL;
    int arr[]={1,2,3,4,5};
    int*poi=arr;
    int x=*&arr[2];
    int y=*&arr[3];
    printf("\nAddress of variable a: %u", &a);//%u is mentioned in book but showing a warning here
    printf("\nAddress of variable a: %p\n", &a);//Address of variable a, %u is mentioned in book but showing a warning here
    printf("value of the variable the address of which stored in pointer: %d", *pt);//
    printf("\nAddress of pointer pt: %p", &pt);
    printf("\nAddress of variable a: %p", pt);
    printf("\nvalue stored in 'a' in hexadecimal form: %x", a);
    printf("\nvalue of null pointer: %d", ptra);
    printf("\nAddress of the variable pointed by the pointer is increased by two bytes: %p",pt+2);
    printf("\nAddress of variable increased by two bytes: %p",&a+2);
    printf("\nValue stored in variable is increased by two bytes: %d",*pt+2);
    printf("\nValue stored in variable is increased by two bytes: %d",a+2);
    printf("\nValue stored in variable is increased by two byte and printed in hexadecimal: %x",*pt+2);
    printf("\nAddress of first element of array: %p",poi);
    printf("\nAddress of first element of array: %p",&arr);
    printf("\nAddress of element present at arr[2]: %p",&arr[2]);
    printf("\nFirst element of array: %d ",*poi);
    printf("\nvalue of the element in array at arr[3]: %d",poi[3]);
    printf("\nAddress of x: %p",&x);
    printf("\nSum of values at arr[2] and arr[3]: %d",x+y);
    //%x is used to print hexadecimal value
    //%p is used to print address
    return 0;
}*/
// VOID POINTER - can be typecasted
/*{
    void *poi;
    int a=5;
    poi=&a;
    printf("%d",*((int*)poi));
}*/
// NULL pointer - a pointer that is not assigned any value but NULL
/*
{
    int *ptr=NULL;
    printf("%d\n",*ptr);//NULL pointer cannot be derefrenced
    printf("%d",ptr);
    return 0;
}*/
// Dangling Pointer - Freed
{
    int a=2;
    int *func();
    {
        return &a;
    }
    int *stray = func();
    printf("%d", stray);
    int *poi;
    //random scope begins
    {
        int b;
        poi=&b;
    }//random scope ends
    printf("%d",poi);
}