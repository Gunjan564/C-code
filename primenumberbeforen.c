#include<studio.h>
int main()
{
    int i, n, r, a;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    r = 0;
    while (n != 1)
    {
        a = n;
        for (i = 2; i < a; a / i, i++)
        {

            if (a % i == 0)
            {
                break;
            }
            else
            {

                if (i == n - 1)
                {
                    printf("%d ", n);
                }
                continue;
            }
        }
        n = n - 1;
        r++;
    }
    printf("%d",2);
    return 0;
}