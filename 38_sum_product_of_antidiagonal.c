/*write a program to find the sum and product of the elements of antidiangonal*/

#include <stdio.h>
    int main()
{
    int i,j,rows,cols,sum=0,product=1;
    printf("Enter number of rows= ");
    scanf("%d", &rows);
    printf("Enter number of columns= ");
    scanf("%d", &cols);
    
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
        sum=sum+arr1[i][cols-i-1];
        product=product*arr1[i][cols-i-1];
    }
    printf("Sum of anti-diagonal elements = %d\n", sum);
    printf("Product of anti-diagonal elements = %d\n", product);
    
    return 0;
}