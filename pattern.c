#include<stdio.h>
int main()
{
    int i,j,n;
    int ch;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
                ch=j+64;
                printf("%c ",ch);
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
        
    }
    return 0;
}