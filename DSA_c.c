#include<stdio.h>;
int main()
{
    struct myarray
    {
        int total_size;
        int used_size;
        int *ptr;
    };
    create_array(struct myarray *array,int total_size,int used_size)
    {
        array->total_size=total_size;
        array->used_size=used_size;
        array
    }
return 0
}
