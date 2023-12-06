/*string -> Character array terminated by null character
=>null character = \0
=>ascii value of null character is 0
=>Declaration of string
>char <string name>[] = "<GUNJAN>"
>when we store the value of string in double inverted commas, the compiler terminates
the string by adding null character on its own
>char <string name>[] = {'G','U','N','J','A','N','\0'}
=> The size of string is one more than the number of characters 
stored in it. For ex: (char str[] = "Hello") the size of this string is 5 */
#include<stdio.h>
#include<string.h>
void printstr(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
}
int main()
{
    char str[9],new[13],copy[22],pointer[67];
    char *ptr="eye";
    printf("Enter the string str: ");
    gets(str);//inputs the string
    printf("Enter the string new: ");
    gets(new);//inputs the string
    printf("Using customized function: ");
    printstr(str);//customized function to print the string character by character
    printf("\nUsing puts: ");
    puts(str);//prints the string
    printf("Using printf: ");
    printf("%s",str);//prints the string using printf
    printf("\nReverse str: ");
    puts(strrev(str));//Reverse the string
    printf("Reverse new: ");
    puts(strrev(new));
    printf("concatenate: ");
    puts(strcat(str,new));//concatenate both the strings
    //and stores them in the first one
    printf("Length of str: %d\n",strlen(str));//Length of the 
    //string, excludes the null character i.e. \0
    printf("Length of new: %d\n",strlen(new));
    printf("Now str: ");
    puts(str);
    strcpy(copy,strcat(str,new));//for strcpy(a,b), the value of b will be stored in a, and 
    //for strcpy(a,"hello"), the value of a will become hello
    printf("The strcmp for str and new returns: %d\n",strcmp(str,new));
    printf("\n%s\n",*ptr); 
    return 0;
}