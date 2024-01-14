#include<stdio.h>
int main()
{
    float a,b;
    char ch;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    getchar();
    printf("Enter the operator: ");
    scanf("%c",&ch);
    switch (ch)
    {
        case '+':
        printf("SUM = %0.0f",a+b);
        break;
        case '-':
        printf("Difference = %0.0f",a-b);
        break;
        case '*':
        printf("PRODUCT = %0.0f",a*b);
        break;
        case '/':
        printf("DIVISOR = %0.3f",a/b);
        break;
        default:
        printf("illegal");
        break;
    }
}