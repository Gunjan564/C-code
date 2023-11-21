#include <stdio.h>
#include <math.h>

int main()
{
    int n, p, a,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    p = 0;
    while (n != 0)
    {
        if (n % 10 == 0)
        {
            n = n + 1;
            p = p  + (n % 10) * pow(10,i);
            n = n / 10;
            i++;
            continue;
        }
        if (n % 10 == 1)
        {
            n = n - 1;
            p = p  + (n % 10) * pow(10,i);
            n = n / 10;
            i++;
            continue;
        }

        else
        {
            p = p  + (n % 10) * pow(10,i);
            n = n / 10;
            i++;
        }
        
    }
    printf("%d", p);
    return 0;
}