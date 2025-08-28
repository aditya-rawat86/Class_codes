/*Write a program to exceute a 10-70 and display the of only first twelve odd number.*/

#include <stdio.h>
    int main()
{
    int n1=10,n2=70,i,sum=0,count=0;
    for(i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            count++;
            if(count==12)
            {
                break;
            }
        }
        printf("%d\n ",i);
    }
    printf("sum = %d ", sum);
    return 0;
}