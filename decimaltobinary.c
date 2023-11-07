#include<stdio.h>

int main()
{
    int i,n,digit[16];
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for(i=1;n>0;n/2,i++)
    {
        digit[i]=n%2;
        n=n/2;
    }
    printf("The value of this no. binary in is: ");
    for(i;i>=1;)
    {
        --i;
        if(i==0)
        {
            break;
        }
        printf("%d",digit[i]);
        
    
    }
    return 0;
}