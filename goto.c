//goto is used to exit from multiple loops
#include<stdio.h>
int main()
{
    int n,i,j;
    for(i=1;i<10;i++)
    {
        printf("Hello\n");
        for(j=0;j<10;j++)
        {
            printf("Enter a number: ");
            scanf("%d",&n);
            if(n==0)
            {
                goto now;
            }
        }
    }
    now:
    {
        printf("ZERO");
    }
    return 0;
}