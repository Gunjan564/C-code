#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k = 0, m;
    char str[] = "the sky is blue";
    for (i = strlen(str) - 1; i >= 0; i--, k++)
    {
        if (str[i] == ' '||i==0)
        {
            if(i==0)
            {
                i=i-1;
            }
            for (j=i+1,m = 1; m <=k+1; m++,j++)
            {
                
                printf("%c", str[j]);
                
            }
            k=-1;
        }
    }
    return 0;
}