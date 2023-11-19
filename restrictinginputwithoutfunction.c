#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a five digit number: ");
    scanf("%d", &n);
    i = 1;
    while (n < 10000 || n > 99999)
    {
        printf("Enter a five digit number: ");
        scanf("%d", &n);
        i++;
    }
    if (n >= 10000 && n <= 99999)
    {
        printf("congratulations!");
    }
    return 0;
}