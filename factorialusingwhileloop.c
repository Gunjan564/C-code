#include<stdio.h>
int main()
{
    int n,i,f;
    printf("Enter the value of a: ");
    scanf("%d",&n);
    i=1,f=1;
    while (i<=n)
    {
        f=f*i;
        if(i==n)     
        {
            printf("%d",i); 
            break;   
        }
        printf("%d * ",i);
        i++;
        
    }
    printf(" = %d",f);

    
}