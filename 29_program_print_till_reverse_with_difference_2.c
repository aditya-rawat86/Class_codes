#include <stdio.h>
    int main()
{
    int i,num;
    printf("Enter number from where you want to print reverse order with a difference of 2 = ");
    scanf("%d",&num);
    i=num;

    while(i>0)
    {
        printf(" %d ",i);
        i=i-2;
    }
    
    return 0;
}