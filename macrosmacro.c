#include <stdio.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)

int main()
{
    float r=10;
    printf("%0.11lf",area(r));
}
