/*Write a program to accept 100 different numbers and calculate their sum*/

#include <stdio.h>
    int main()
{
    int a[100],i,sum=0;
    for(i=0;i<=99;i++)
    {
        printf("Enter number = ");
        scanf("%d",&a[i]);
        sum+=a[i];
        
    }
    printf("sum = %d",sum);
    return 0;
}