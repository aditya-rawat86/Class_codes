#include <stdio.h>
    int main()
{
    char user_choice,i,j;
    printf("Enter in which case u want to print all alphabets (u/l): ");
    scanf("%c",&user_choice);
    if(user_choice=='u')
    {
        for(i='A';i<='Z';i++)
        {
            printf("%c ",i);
        }
    }
    else if(user_choice=='l')
    {
        for(j='a';j<='z';j++)
        {
            printf("%c ",j);
        }
    }
    else 
    {
        printf("invalid input");
    }
    
    return 0;
}