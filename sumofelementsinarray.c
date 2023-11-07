#include<stdio.h>

int main()
{
    int sum,i,arr[4];
    for(sum=0,i=1;i<4;i++)
    {
    printf("Enter the %d element in array: ",i);
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    printf("sum=%d",sum);

    return 0;
}