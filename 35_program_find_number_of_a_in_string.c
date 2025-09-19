/*write a program to accept a string from a user and count the number of a in that string*/

#include <stdio.h>
    int main()
{
    char str[50];
    int i,count=0;
    printf("Enter a string = ");
    fgets(str,sizeof(str),stdin);
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='A')
        {
            count++;
        }
    }
    printf("Number of occurrences of 'a' or 'A': %d\n", count);
    
    return 0;
}