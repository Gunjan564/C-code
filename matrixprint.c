#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter the no. of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of columns: ");
    scanf("%d",&c);
    int element[r][c];
    for(element[i][j],i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("Enter the (%d,%d) element: ",i,j);
            scanf("%d",&element[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",element[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}