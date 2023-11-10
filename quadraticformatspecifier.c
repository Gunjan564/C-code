//Solve the Quadratic Equation and print the equation correctly
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x1,x2;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("The Equation is %0.0fx^2+%0.0fx+%0.0f=0\n",a,b,c);
    if(d<0)
    {
        printf("Equation has imaginary roots:");
        printf("\nx = (%0.0f+%0.2fi)/%0.0f         x = (%0.0f-%0.2fi)/%0.0f",-b,sqrt(-d),2*a,-b,sqrt(-d),2*a);
    }
    else
    if(d>0)
    {
        printf("Equation has real and unequal roots:");
        printf("\nx1 = %0.2f       x2 = %0.2f",x1,x2);
    }
    else
    {
        printf("Equation has equal roots");
        printf("\nx1 = %0.2f       x2 = %0.2f",x1,x2);
    }
    
}