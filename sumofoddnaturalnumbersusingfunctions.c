#include <stdio.h>
int sum(int n)
{
    return n * n;
}
int main()
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is: %d", n, sum(n));
    return 0;
}