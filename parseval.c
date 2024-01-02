#include <stdio.h>
#include <string.h>
void parse(char arr[])//Function prototyping 
{
    int i,index,new=0;
    //Removing Tags
    for( i=0;i<=strlen(arr);i++)
    {
        if(arr[i]=='<')
        {
            index=1;
            continue;
        }
        else if(arr[i-1]=='>')
        {
            index=0;
        }
        if(index==0)
        {
            arr[new]=arr[i];
            new++;
        }
    }
    //Removing Trailing spaces from the beginning 
    while(arr[0]==' ')
    {
        i=0;
        new=0;
        while(i<=strlen(arr))
        {
            arr[new]=arr[i+1];
            i++;
            new++;
        }
    }
    //Removing Trailing spaces from the end 
    while(arr[strlen(arr)-1]==' ')
    {
        arr[strlen(arr)-1]='\0';
    }
    printf("~~%s~~",arr);
}
int main() //main function begins 
{
    printf("Hello world");
    char str[20];//String declaration 
    printf("\n");
    gets(str);//String input 
    parse(str);//Function call 
    return 0;
}

