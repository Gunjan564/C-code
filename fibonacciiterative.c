#include <stdio.h>

int main()
{
    int n, i, a[8];
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++)
    {
        a[1] = 1;
        a[2] = 1;
        if (i == 1 || i == 2)
        {
            printf("%d ", 1);
        }
        else
        {
            a[i] = a[i - 1] + a[i - 2];
            printf(" %d  ", a[i]);
        }
    }
    return 0;
}