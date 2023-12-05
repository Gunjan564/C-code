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
    printf("%p",p);
    return 0;
}