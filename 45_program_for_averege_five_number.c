/*Program to calculate the average of five numbers.*/

#include <stdio.h>
float average(int arr[],int size)
{
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }

    return (float)sum/size;
}

int main()
{
    int num[5],i;
    float avg;
    printf("Enter 5 numbers = ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

    avg= average(num,5);

    printf("Average for 5 numbers = %.2f",avg);

    return 0;
}

