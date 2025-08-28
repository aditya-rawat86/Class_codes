/*program to get sum of 2 numbers....*/

#include <stdio.h>
    int main()
{
    int num1,num2;
    printf("enter number 1 =");
    scanf("%d",&num1);
    printf("enter number 2 =");
    scanf("%d",&num2);
   
    int sum=num1+num2;
    printf("The sum of the two number is = %d\n", sum);
   
    return 0;
}