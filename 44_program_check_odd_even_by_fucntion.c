/*Program to check whether a number is even or odd*/

#include <stdio.h>
void check_even_odd(int number)
{
    if(number%2==0)
    {
        printf("%d is even",number);
    }
    else
    {
        printf("%d is odd",number);
    }

    return;
}

int main()
{
    int num;
    printf("Enter number to check = ");
    scanf("%d",&num);

    check_even_odd(num);

    return 0;

}



