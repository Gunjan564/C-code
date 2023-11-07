//conversion of distance from kilometres to m,feet,inch,cm 

#include<stdio.h>

int main()
{
    float d,m,f,i,c;
    printf("Enter the distance in kilometres: ");
    scanf("%f",&d);
    m=1000*d;
    f=3280.84*d;
    i=2.54e-5*d;
    c=100000*d;
    printf("The Distance in metres(m): %f\n",m);
    printf("The Distance in feet: %f\n",f);
    printf("The Distance in inches: %f\n",i);
    printf("The Distance in centimetres(cm): %f",c);

    return 0;
}