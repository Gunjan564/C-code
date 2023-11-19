#include <stdio.h>
#include<math.h>
int main()
{
    float a,c;
    printf("Enter the value of angle: ");
    scanf("%f", &a);
    c=sin(a)*sin(a) + cos(a)*cos(a);
    printf("%0.0f",c);
    return 0;
}