#include <stdio.h>
int fib(int n)
{
    if (n == 2 || n == 1)
        return 1;
    if (n <= 0)
        return 0;
    else
        return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int i, n, a;
    printf("Enter the value of n: ");
    scanf("%d", &a);
    printf("For n = %d Fibonacci term is:", a);
    i = 1;
    while (i <= a)
    {
        printf(" %d  ", fib(i));
        i++;
    }
    return 0;
}
