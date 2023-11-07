//Grade of students
#include<stdio.h>

int main()
{
    int g;
    printf("Enter your Percentage: ");
    scanf("%d",&g);
    if (g>90)
    {
        printf("A grade");
    }
    else
    if(g>70)
    {
      printf("B grade");  
    }
    else
    if(g>50)
    {
        printf("C grade");
    }
     else
    if(g>40)
    {
        printf("D grade");
    }
     else
    {
        printf("Fail");
    }
    return 0;
}