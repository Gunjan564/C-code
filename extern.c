#include <stdio.h>
#include "x.c"
//int c=78;
extern int c; 
void main()
{
    int b=9;
    extern int c;       
    printf("%d\n", add(3,5));
    printf("%d\n",b);
    printf("%d\n",c); 
}  
