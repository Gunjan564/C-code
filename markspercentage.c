//percentage of marks

#include<stdio.h>
int main()
{   
    float _maths,physics,chemistry,english,hindi,p;
    printf("enter the marks of physics");
    scanf("%f",&physics);
    printf("enter the marks of maths");
    scanf("%f",&_maths);
    printf("enter the marks of chemistry");
    scanf("%f",&chemistry);
    printf("enter the marks of english");
    scanf("%f",&english);
    printf("enter the marks of hindi");
    scanf("%f",&hindi);
    p=(_maths+physics+chemistry+english+hindi)*100/5;//percentage formula
    printf("the marks in percentage is: %f",p);
    
}