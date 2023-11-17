//Area of circle
#include<stdio.h>
#define PI 3.14
int main ()
{
    float a,r;
    printf("the value of r: ");
    scanf("%f",&r);
    a=PI*r*r;
    printf("the area of circle is %0.2f",a);
    return 0;

}