#include<stdio.h>

int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(sum=0;n>0;)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}