#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    d=((1189/pow(2,n)))*841;
    printf("a(%d) = %d",n,d); 
    return 0;
}