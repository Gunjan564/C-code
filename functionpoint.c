#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int (*ptr)(int,int);//Declaration of function pointer
    ptr=&sum;
    printf("The sum of 'a' and 'b' is: %d\n",(*ptr)(4,6));
    printf("The address of the function is: %d and %d",&sum,ptr);
}