#include <stdio.h>

int main()
{
    int i, n, r, p, q, h, true, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d ", 2);
    q = 1;
    i = 3;
    s = 1;
    while (s < n)
    {
        for (i, p = i, r = 2; r < i; r++, i / r)
        {
            if (i % r == 0)
            {
                break;
            }
            else
            {
                if (r == i - 1)
                {
                    printf("%d ", p);
                    h = true;
                    if (h == true)
                    {
                        s++;
                    }
                }
                continue;
            }
        }
        i++;
        q++;
        if (s == n)
        {
            break;
        }
    }
    return 0;
}