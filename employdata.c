#include <stdio.h>
#include<string.h>
struct employdata
{
    char name[20];
    int age;
    char grade;
};
int main()
{
    struct employdata e1, e2, e3,*p;
    strcpy(e1.name , "Will");
    e1.age = 21;
    e1.grade = 'A';
    strcpy(e2.name , "Mike");
    e2.age = 21;
    e2.grade = 'B';
    strcpy(e3.name , "Eleven");
    e3.age = 21;
    e3.grade = 'C';
    p=&e1;
    printf("Address of e1 %p\n",p);
    printf("Name of first employ is %s\n",e1.name);
    printf("Age of 1st employ is %d\n",e1.age);
    printf("Grade of first employ is %c\n",e1.grade);
    printf("Name of 2nd employ is %s\n",e2.name);
    printf("Age of 2nd employ is %d\n",e2.age);
    printf("Grade of 2nd employ is %c\n",e2.grade);
    printf("Name of 3rd employ is %s\n",e3.name);
    printf("Age of 3rd employ is %d\n",e3.age);
    printf("Grade of 3rd employ is %c\n",e3.grade);
    return 0;
}