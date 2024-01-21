#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, n, e, ph;
    struct employ
    {
        char *id;
        int *phone;
    } ;
    printf("Enter the no. of employees:");
    scanf("%d", &e);
    struct employ *ptr;
    ptr=NULL;
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
        printf("Enter the no. digits in your phone no.");
        scanf("%d",&ph);
        (ptr+i-1)->phone=(int*)malloc(ph*sizeof(int));
        printf("Enter your phone number: ");
        for(int j=0;j<ph;j++)
        {
            scanf("%d",&((ptr+i-1)->phone[j]));
        }
    }
    for(i=1;i<=e;i++)
    {
        printf("Employ %d id: ",i);
        puts((ptr+i-1)->id);
    }
    free(ptr);
    ptr="NULL";
    return 0;
}