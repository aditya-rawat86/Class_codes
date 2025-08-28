/*Write a program to find greatest number amoung four, using if-else-if.*/

#include <stdio.h>
    int main()
{
    int a,b,c,d;
    printf("enter number respectively = ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("a is the greatest");
    }
    else if(b>c && b>a && b>d)
    {
        printf("b is the greatest");
    }
    else if(c>d && c>b && c>a)
    {
        printf("c is the greatest");
    }
    else
    {
        printf("d is greatest");
    }
    return 0;
}