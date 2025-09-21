/*write a program to display matrix multiplication*/

#include <stdio.h>
    int main()
{
    int i,j,k,rows,cols,rows2,cols2;
    printf("Enter number of rows = ");
    scanf("%d",&rows);
    printf("Enter number of columns = ");
    scanf("%d",&cols);
    printf("Enter number of rows for second matrix = ");
    scanf("%d",&rows2);
    printf("Enter number of columns for second matrix = ");
    scanf("%d",&cols2);

    int arr1[rows][cols],arr2[rows2][cols2],arr3[rows][cols2];
    printf("Enter elements of the first matrix =\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of the second matrix =\n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols2;j++)
        {
            arr3[i][j]=0;
            for(k=0;k<cols;k++)
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Multiplication of two matrices =\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols2;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}