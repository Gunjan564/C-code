#include <stdio.h>

int main()
{
    int i, N, n;
    printf("Enter the N amount of money:   ");
    scanf("%d", &N);
    for (i = 1; i <= 6; i++)
    {
        if (i = 1)
        {
            n = 100;
            if(N>=n)
            {
                printf("%d notes of %d\n", N / n, n);
                N = N % n;
            }
        }

        if (i = 2 )
        {
            n = 50;
           if(N>=n)
            {
                printf("%d notes of %d\n", N / n, n);
                N = N % n;
            }
        }
        if (i = 3)
        {
            n = 10;
            if(N>=n)
            {
                printf("%d notes of %d\n", N / n, n);
                N = N % n;
            }
        }
        if (i = 4)
        {
            n = 5;
            if(N>=n)
            {
                printf("%d notes of %d\n", N / n, n);
                N = N % n;
            }
        }
        if (i = 5)
        {
            n = 2;
            if(N>=n)
            {
                printf("%d notes of %d\n", N / n, n);
                N = N % n;
            }
        }
        if (i = 6 )
        {
            n = 1;
           if(N>=n)
            {
                printf("%d notes of %d\n", N / n, n);
                N = N % n;
            }
        }
    }
    return 0;
}