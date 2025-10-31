/*Write a program in C to count the total number of words in a string.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter string = ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]==' ' || str[i]=='\n' || str[i]=='\t') && str[i+1]!=' ' && str[i+1]!='\0')
        {
            count++;
        }
    }
    if(strlen(str) > 0)
    {
        count++;
    }
    printf("Total number of words = %d\n", count);

    return 0;
}