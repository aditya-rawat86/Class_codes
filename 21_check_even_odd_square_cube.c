#include <stdio.h>
    int main()
{
    int num1,num2;
    printf("Enter first number = ");
    scanf("%d",&num1);
    printf("Enter second number = ");
    scanf("%d",&num2);

    if(num1%2==0)
    {
        printf(" %d is even and square is %d\n",num1,num1*num1);
    }
    else 
    {
        printf(" %d is odd and cube is %d\n",num1,num1*num1*num1);
    }

    if(num2%2==0)
    {
        printf(" %d is even and square is %d\n",num2,num2*num2);
    }
    else 
    {
        printf(" %d is odd and cube is %d\n",num2,num2*num2*num2);
    }

    return 0;
}