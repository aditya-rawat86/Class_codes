/*Write a program to find the sum of diagonal elements of a 3x3 matrix.*/

#include <stdio.h>

int main()
{
    int arr1[3][3],i,j,sum=0;

    printf("Input elements in the matrix =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        sum += arr1[i][i];
    }

    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}