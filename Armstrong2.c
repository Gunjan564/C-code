#include<stdio.h>
#include<math.h> 
int main(){
    int num, originalNum, reminder, n = 0;
    float result = 0.0;

    printf("TO CHECK THAT GIVEN NUMBER IS ARMSTRONG OR NOT.\nARMSTRONG IS A NUMBER WHICH ON ADDITON OF Nth POWER (WHICH IS NUMBER OF OF DIGIT) IS EQUAL TO THE NUMBER. \n");
    printf("enter the number: ");
    scanf("%d",&num);
    originalNum = num;
    for (originalNum = num; originalNum !=0;++n)
    {
        originalNum /= 10;
    }
    for (originalNum = num; originalNum != 0; originalNum/=10)
   {
        reminder = originalNum % 10;

        result += pow(reminder , n);
    }
    if ((int)result == num)
        printf("%d is an armstrong number",num);
    else
        printf("%d is not a armstrong number",num);
    return 0;
}