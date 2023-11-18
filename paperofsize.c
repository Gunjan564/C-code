#include <stdio.h>
int main()
{
    int n,l,b;
    for(n=0,l=1189,b=841;n<=8;n++)
    {
        printf("A(%d) = %dmm x %dmm = %d\n",n,l,b,l*b);
        if (l>b)
        {
            b=b;
            l=l/2;
        }
        if(b>l)
        {
            l=l;
            b=b/2;
        }
        
    }
    return 0;
}