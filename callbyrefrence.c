#include <stdio.h>
int swap(int *x,int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() 
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("After Swapping\n");
    printf("Value of a is: %d",a);
    printf("\nValue of b is: %d",b);
    
    return 0;
}