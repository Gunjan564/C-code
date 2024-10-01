#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArray *array, int total_size, int used_size)
{
    array->total_size = total_size;
    array->used_size = used_size;
    array->ptr = (int *)malloc(total_size * sizeof(int));
}
void setvalue_in_Array(struct myArray *array)
{
    int n;
    for(int i=0;i<array->used_size;i++){
    printf("Enter the element at %d: ",i);
    scanf("%d",&n);
    (array->ptr)[i]=n;
    }
}
void print_array(struct myArray *array)
{
    for(int i=0;i<array->used_size;i++){
    printf("%d ",(array->ptr)[i]);
    }
}
int main()
{
    struct myArray Natural_numbers;
    createArray(&Natural_numbers,10,7);
    setvalue_in_Array(&Natural_numbers);
    print_array(&Natural_numbers);
    return 0;
}
