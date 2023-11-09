//check whether the number is armstrong for a
#include<stdio.h>
int main()
{
    int r,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=n;
    for(r=0;n>0;n=n/10)
    {
        r=((n%10)*(n%10)*(n%10))+r;
    }
    if(r==a)
    printf("Number is Angstorm\n");
    else
    printf("Not an Angstorm\n");   
    return 0;
}