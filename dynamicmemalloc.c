#include <stdio.h>
#include <stdlib.h>
// use of malloc
// int main()
// {
//     int *ptr;
//     int n, i;
//     printf("Enter the size of array you want to create: ");
//     scanf("%d", &n);
//     ptr = (float *)malloc(n * sizeof(char));
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter the %d element of array: ", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("The %d element of the array is: %d\n", i, ptr[i]);
//     }
// }
// use of calloc
int main()
{
    int *ptr;
    int n, i;
    printf("Enter the size of array you want to create: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(char));
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The %d element of the array is: %d\n", i, ptr[i]);
    }
    //use of realloc
    printf("Enter the NEW size of array you want to create: ");
    scanf("%d", &n);
    ptr=(int* )realloc(ptr,n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The %d element of the array is: %d\n", i, ptr[i]);
    }
}

