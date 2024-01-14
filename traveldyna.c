#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, n;
    printf("Enter the number of number of characters in your id: ");
    scanf("%d", &n);
    
    struct employ
    {
        char id[];
    } roll;
    struct employ *ptr;
    ptr = (struct employ *)malloc(n * sizeof(struct employ));
    printf("Enter the id: ");
    scanf("%d", &roll.rollno);
    printf("%d", roll.rollno);

}