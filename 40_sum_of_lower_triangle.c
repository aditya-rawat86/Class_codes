/*write a program to find the sum of a lower triangle oof a three by three matrix*/

#include <stdio.h>
    int main()
{
    int i,j,rows,cols,sum=0;
    printf("Enter number of rows= ");
    scanf("%d",&rows);
    printf("Enter number of columns= ");
    scanf("%d",&cols);
    
    int arr1[rows][cols];
    printf("Enter elements of the matrix=\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i>=j)
            {
                sum=sum+arr1[i][j];
            }
        }
    }
    printf("Sum of lower triangle elements = %d\n", sum);
    
    return 0;
}