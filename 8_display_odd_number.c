/*Write a program to accept two number from a user and display all odd numbers.*/

#include<stdio.h>
    int main()
{
    int i,n1,n2;
    
    printf("enter number = ");
    scanf("%d",&n1);
    printf("enter number = ");
    scanf("%d",&n2);

    for(i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        {   printf("%d ",i);
        }    
    }
    
    return 0;
}