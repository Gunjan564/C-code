#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, n, e;
    struct employ
    {
        char *id;
    } ;
    printf("Enter the no. of employees:");
    scanf("%d", &e);
    struct employ *ptr;
    ptr = (struct employ *)malloc(e * sizeof(struct employ));
    for (i = 1; i <= e; i++)
    {
        printf("Employ %d: \n",i);
        printf("Enter the number of number of characters in your id: ");
        scanf("%d", &n);
        (ptr+i-1)->id=(char*)malloc(n*sizeof(char));
        getchar();
        printf("Enter the id: ");
        gets((ptr+i-1)->id);
    }
    for(i=1;i<=e;i++)
    {
        printf("Employ %d id: ",i);
        puts((ptr+i-1)->id);
    }
    return 0;
}