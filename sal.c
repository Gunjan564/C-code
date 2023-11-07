//Gross Salary//
#include<stdio.h>
int main()
{
    float b,g,x,h;
    printf("Enter the Basic salary: ");
    scanf("%f",&b);//b=basic salary
    x=0.4*b+0.2*b;//dearness allowance=40% house rent allowance=20%
    g=b-x;//g=gros salary
    printf("Your gross salary is: %f",g);
    return 0;
}