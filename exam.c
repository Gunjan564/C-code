#include<stdio.h>
int main()
{
  int n=4;
  for(int i=2;i<=n;i++)
  {
    if(n%i==0)
    {
      break;
      printf("%d is prime");
    }
    else
    {
      printf("%d is not prime");
    }
  }
return 0;
}

