// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num, index = num;
    printf("Enter the number: ");
    scanf("%d\n", &num);
    do
    {
        printf("%d\n", index - 1);
        index = index - 1;
    } while (index > 0);

    return 0;
}