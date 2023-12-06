#include<stdio.h>
int rev(int arr[],int srr[],int i)
{
    int j;
     for(i=i-1,j=0;i>=0;i--,j++)
    {
        arr[j]=srr[i];
        printf("%d ",arr[j]);
    }
    return 0;
}
int main()
{
    int i,arr[9]={2,4,5,7,8,9},srr[9];
    for(i=0;i<=5;i++)
    {
        printf("%d ",arr[i]);
        srr[i]=arr[i];    
    }
    printf("\n");
    rev(arr,srr,i);
}