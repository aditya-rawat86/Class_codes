/*write a program to display the sum of two arrays*/

#include <stdio.h>
    int main()
{
    int i,j,rows,cols;
    printf("Enter number of rows= ");
    scanf("%d",&rows);
    printf("Enter number of columns= ");
    scanf("%d",&cols);

    int arr1[rows][cols],arr2[rows][cols],arr3[rows][cols];
    printf("Enter elements of the first matrix=\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of the second matrix=\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Sum of two matrices=\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}