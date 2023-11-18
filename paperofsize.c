#include <stdio.h>
int main()
{
    int p,n;
    float l,b;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(p=0,l=1189,b=841;p<=n;p++)
    {
        printf("A(%d) = %0.4fmm x %0.4fmm = %f\n",p,l,b,l*b);
        if (l>b)
        {
            b=b;
            l=l/2;
        }
        else if(b>l)
        {
            l=l;
            b=b/2;
        }
        
    }
    return 0;
}
