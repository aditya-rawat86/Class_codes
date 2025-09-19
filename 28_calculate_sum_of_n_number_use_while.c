#include <stdio.h>
    int main()
{
    int sum=0,i=0,num;
    printf("Enter number to get sum = ");
    scanf("%d",&num);
    
    while(i<=num)
    {
        sum=sum+i;
        i=i+1; 
    }
    printf("Sum of numbers = %d ",sum);

    return 0;
}