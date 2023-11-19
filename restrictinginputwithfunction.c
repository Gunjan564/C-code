#include <stdio.h>
int five(int n)
{
    printf("Enter a five digit number: ");
    scanf("%d", &n);
    if (n < 10000 || n > 99999)
    {
        five(n);
    }
    else
        printf("Congratulations");
    return 0;
}
int main()
{
    int n;
    five(n);
    return 0;
}