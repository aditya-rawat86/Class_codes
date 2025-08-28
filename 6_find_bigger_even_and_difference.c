/*Write a program to accept two numbers from a user evaluate the number which 
is bigger for even and also display the difference between the numbers.*/

#include <stdio.h>
    int main()
{
    int num1,num2,big_even,diff;
    printf("Enter first number = ");
    scanf("%d",&num1);
    printf("Enter second number = ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        big_even=num1;
    }
    else 
    {
        big_even=num2;
    }
    if(big_even%2==0)
    {
        printf("Bigger even = %d\n",big_even);
    }
    else
    {
        printf("There is no even bigger number\n");
    }
    if(num1>num2)
    {
        diff=num1-num2;
    }
    else
    {
        diff=num2-num1;
    }
    
    printf("difference = %d",diff);

    return 0;
    
}