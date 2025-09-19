/*Write a program to display Floyd's triangle*/

#include <stdio.h>
int main()
{
    int rows,i,j,p,q;
    printf("Enter number of rows = ");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++)
    {
        if(i%2==0)
        {
            p=1;
            q=0;
        } 
        else 
        {
            p=0;
            q=1;
        }
        for(j=1;j<=i;j++) 
        {
            if(j%2==0)
                printf("%d ",p);
            else
                printf("%d ",q);
        }
        printf("\n");
    }

    return 0;
}
