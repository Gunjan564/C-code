//syntax of function
/*
return type function name(data type parameter1,data type parameter2,...)
{
    code to be executed
}
*/
// There are three steps to use function
//Declaration, Defination, call
/*We have to declare the function before calling 
it, but we can define it before or after call.*/
//There are two types of functions (a)library (b)user defined 

//Example 1(With argument and with return value)
/*#include<stdio.h>
int sum(int a,int b)//Declaration of function, a and b are arguments 
{
    printf("hi!");
    return a*b;//defining the function,a*b is return value
}
int main()
{
    int a=2,b=3,c;
    //c=sum(a,b);
    printf("%d",sum(a,b));//Calling a function
    return 0;
}*/
//Example 2(Without argument without return value)
/*#include<stdio.h>
void hello(int n);
void main()
{
    int n;
    //printf("Enter the value of n: ");
    //scanf("%d",&n);
    //printf("%c",hello(n));
    hello(5);
}
void hello(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c",'&');
    }
}*/
//Example 3(without argument with return value)
/*#include<stdio.h>
int next()
{
    int n;
    printf("Tell me a number: ");
    scanf("%d",&n);
    return n;
}
int main()
{
    printf("you enetred %d",next());
    return 0;
}*/
//Example 4(Without argument without return value)
/*#include<stdio.h>
void itsme();

int main()
{
    printf("Enter a number if you are a human\n");
    itsme();
    return 0;
}
void itsme()
{
    int i;
    printf("hello it is a diamond");
    i=1;
    while(i<5)
    {
        printf("*");
        i++;
    }
    if(i==5)
    {
        i=5;
        while(i>1)
        {
            i--;
            printf("%c",'*');
        }    
    }
}*/

