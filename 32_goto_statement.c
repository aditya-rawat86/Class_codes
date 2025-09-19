#include <stdio.h>
    int main()
{
    int i,num;

    for(i=1;i<=5;i++)
    {
        printf("Enter number = ");
        scanf("%d",&num);
        
        if(num<10)
        {
            goto jump_label;
        }
    }
jump_label:
    printf("jump called");
    return 0;
}