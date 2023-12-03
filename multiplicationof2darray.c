#include<stdio.h>

int main()
{
    //Taking values in 1st array
    int row1,col1,row2,col2,arr[10][10],ele,sum;
    for(row1=1;row1<=3;row1++)
    {
        for(col1=1;col1<=3;col1++)
        {
            printf("Enter the (%d,%d) element of 1st array: ",row1,col1);
            scanf("%d",&arr[row1][col1]);
        }
    }
    //printing 1st array
    printf("Following matrix is:\n");
    for(row1=1;row1<=3;row1++)
    {
        for(col1=1;col1<=3;col1++)
        {
            printf("%d ",arr[row1][col1]);
        }
        printf("\n");
    }
    //Taking values in 2nd array
    for(row2=1;row2<=3;row2++)
    {
        for(col2=1;col2<=3;col2++)
        {
            printf("Enter the (%d,%d) element of 2nd array: ",row2,col2);
            scanf("%d",&arr[row2][col2]);
        }
    }
    //printing 2nd array
    printf("Following matrix is:\n");
    for(row2=1;row2<=3;row2++)
    {
        for(col2=1;col2<=3;col2++)
        {
            printf("%d ",arr[row2][col2]);
        }
        printf("\n");
    }
    //SUM of array
    printf("The sum of both the arrays is: \n");
    for(row1=1,row2=1;row1<=3,row2<=3;row1++,row2++)
    {
        for(col2=1,col1=1;col2<=3,col1<=3;col2++,col1++)
        {
            printf("%d ",arr[row1][col1]+arr[row2][col2]);
        }
        printf("\n");
    }
    //Difference of array
    printf("The Difference of both the arrays is: \n");
    for(row1=1,row2=1;row1<=3,row2<=3;row1++,row2++)
    {
        for(col2=1,col1=1;col2<=3,col1<=3;col2++,col1++)
        {
            printf("%d ",arr[row1][col1]-arr[row2][col2]);
        }
        printf("\n");
    }
    //PRODUCT of array
    printf("The product of both the arrays is: \n");
    for(row1=1;row1<=3;row1++)
    {
        for(col2=1;col2<=3;col2++)
        {
            for(col1=1,row2=1,ele=0;col1<=3,row2<=3;col1++,row2++)
            {
                ele=ele+arr[row1][col1]*arr[row2][col2];                
            }
            printf("%d  ",ele);
        }
        printf("\n");
    }
    //Sum of elements of Principal diagonal
    for(sum=0,row1=1,col1=1;row1<=3,col1<=3;row1++,col1++)
    {
        sum+=arr[row1][col1];
    }
    printf("The Sum of elements of Principal diagonal of 1st array: %d",sum);
    for(sum=0,row2=1,col2=1;row2<=3,col2<=3;row2++,col2++)
    {
        sum+=arr[row2][col2];
    }
    printf("\nThe Sum of elements of Principal diagonal of 2nd array: %d",sum);
    return 0;
}