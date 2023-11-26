
#include <stdio.h>
int func(int file[])
{
    int i;
    for(i=0;i<=8;i++)
    {
        file[i]=file[i]+1;
    }
}
int main() 
{
   int i,arr[]={1,2,3,4,5,6,7,8,9};
    // Write C code here
    printf("Hello world\n");
    for(i=0;i<=8;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    func(arr);
    for(i=0;i<=8;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}