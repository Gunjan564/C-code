// check whether the number is Armstrong or not 
#include <stdio.h>
#include<math.h>
int main() 
{
    int n,a,s,b,i,arr[10];
    printf("Enter n: ");
    scanf("%d",&n);
    a=n;
    for(i=1;n!=0;i++)
    {
        arr[i]=n%10;
        n=n/10;
    }
    i=i-1;
    b=i;
    for(s=0;b!=0;b--)
    {
        s=s+pow(arr[b],i);
    }
    if(s==a)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    return 0;
}