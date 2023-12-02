#include<stdio.h>

int main()
{
    int row1,col1,row2,col2,arr[10][10];
    for(row1=1;row1<=3;row1++)
    {
        for(col1=1;col1<=3;col1++)
        {
            printf("Enter the (%d,%d) element of array: ",row1,col1);
            scanf("%d",&arr[row1][col1]);
        }
    }
    printf("Following matrix is:\n");
    for(row1=1;row1<=3;row1++)
    {
        for(col1=1;col1<=3;col1++)
        {
            printf("%d ",arr[row1][col1]);
        }
        printf("\n")
    }
    for(row2=1;row2<=3;row2++)
    {
        for(col2=1;col2<=3;col2++)
        {
            printf("Enter the (%d,%d) element of array: ",row2,col2);
            scanf("%d",&arr[row2][col2]);
        }
    }
    printf("Following matrix is:\n");
    for(row2=1;row2<=3;row2++)
    {
        for(col2=1;col2<=3;col2++)
        {
            printf("%d ",arr[row2][col2]);
        }
        printf("\n")
    }


    
    return 0;
}