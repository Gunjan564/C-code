#include <stdio.h>

int main()
{
    int n, p, a;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    p = 0;
    while (n != 0)
    {
        if (n % 10 == 0)
        {
            n = n + 1;
            p = p * 10 + n % 10;
            n = n / 10;
            continue;
        }
        if (n % 10 == 1)
        {
            n = n - 1;
            p = p * 10 + n % 10;
            n = n / 10;
            continue;
        }

        else
            p = p * 10 + n % 10;
            n = n / 10;
    }
    
    a=0;
    while(p!=0)
    {
        a = a * 10 + p % 10;
        p = p / 10;
    }
    printf("%d", a);
    return 0;
}