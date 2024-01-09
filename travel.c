
#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    struct drivers
    {
        char name[20];
        char license[20];
        char route[20];
        int kms;
    } ;
    struct drivers details[3];
    for(i=0,j=1;i<1,j<=3;i++,j++)
    {
        printf("Driver %d\n",j);
        printf("Enter the name of the driver: ");
        gets(details[i].name);
        printf("Enter the license: ");
        gets(details[i].license);
        printf("Enter the route: ");
        gets(details[i].route);
        printf("Enter the distance travelled through the vehicle in kms: ");
        scanf("%d",& details[i].kms);
        printf("\n");
    }
    for(i=0,j=1;i<1,j<3;i++,j++)
    {
        printf("Driver No.%d \n",j);
        printf("Name: ");
        puts(details[i].name);
        printf("License: ");
        puts(details[i].license);
        printf("Route: ");
        puts(details[i].route);
        printf("Distance: %dkms\n\n",details[i].kms);
    }
    return 0;
}

