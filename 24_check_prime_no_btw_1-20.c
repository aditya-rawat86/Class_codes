#include <stdio.h>
    int main()
{
    int i,j,count,prime=0;

    printf("Prime numbers between 1 and 20 are:\n");
    for(i=2;i< 20;i++) 
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0) 
            {
                count++;
            }
        }
        if(count==2) 
        {
            printf("%d ", i);
            prime++; 
        }
    }
    
    return 0;
}