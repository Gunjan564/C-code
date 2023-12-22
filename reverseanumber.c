// Reverse a number
//  #include<stdio.h>
//  int main()
//  {
//      int n,rev;
//      printf("Enter a number: ");
//      scanf("%d",&n);
//      rev=0;
//      while(n!=0)
//      {
//          rev=n%10+rev*10;
//          n=n/10;
//      }
//      printf("%d",rev);
//      return 0;
//  }
// Reverse a number using function
#include <stdio.h>
int exam;
int rev(int *n)
{
    int r=0;
    while(*n!=0)
    {
        
        r = r * 10 + *n % 10;
        *n = *n / 10;
    }
    // printf("%d",n);
    return r;
}
int main()
{
    int a;
    printf("Enter a no. to reverse it: ");
    scanf("%d", &a);
    printf("Reversed no. is: %d",rev(&a));
    printf("\n%d",a);
    return 0;
}