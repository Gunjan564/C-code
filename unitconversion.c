#include<stdio.h>
float unit(float n,int a);
int main()
{
    int a;
    float n;
    char from,to;
    printf("Unit Conversion:\n");
    printf("Available conversions:\n");
    printf("1. kms to miles\n");
    printf("2. inches to foot\n");
    printf("3. cms to inches\n");
    printf("4. pound to kg\n");
    printf("5. inches to metres\n");
    printf("Choose the coversion unit: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Type the value in kms= ");
        scanf("%f",&n);
        printf("\nValue is %0.3fmiles",n*0.621371);
    } 
     if(a==2)
    {
        printf("\nType the value in inches= ");
        scanf("%f",&n);
        printf("\nValue is %0.3ffoot",n*0.0833);
    } 
     if(a==3)
    {
        printf("\nType the value in cms= ");
        scanf("%f",&n);
        printf("\nValue is %0.3finches",n*0.394);
    } 
     if(a==4)
    {
        printf("\nType the value in pounds= ");
        scanf("%f",&n);
        printf("\nValue is %0.3fkg",n*0.454);
    } 
     if(a==5)
    {
        printf("\nType the value in inches= ");
        scanf("%f",&n);
        printf("\nValue is %0.3fmetres",n*0.0254);
    }    
return 0;
}