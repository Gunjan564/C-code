#include<stdio.h>
int main()
{
    int i,n,f;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=1,f=1;
    do
    {
        f=f*i;
        if(i==n)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d *",i);
        }
        i++;
    } while (i<=n);
    printf(" = %d",f);
}