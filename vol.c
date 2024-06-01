#include<stdio.h>
int main ()
{
    float r,v;
    //clrscr();
    printf("Enter the value of r: ");
    scanf("%f",&r);
    v=(4/3)*3.14*r*r*r;
    printf("The volume of sphere is %.4f",v);
    return 0;
}
