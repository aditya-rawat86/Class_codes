/*Write a program to accept a character from a user if the given character
is in uppercase convert in into lowercase.*/

#include <stdio.h>
    int main()
{
    char chrc,lower_char;
    printf("Enter character to covert in lower = ");
    scanf("%c",&chrc);

    if(chrc>='A' && chrc<='Z')
    {   lower_char=chrc+32;
        printf("Output = %c\n",lower_char);
    }
    else{
        printf("invalid entry");
    }
 
    return 0;
    
}