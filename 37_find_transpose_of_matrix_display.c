/*write a program to find a transpose of a given matrix and display original and transposed*/

#include <stdio.h>
    int main()
{
    int rows,cols,i,j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols],trans[cols][rows];
    printf("Enter elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            trans[j][i] = arr[i][j];
        }
    }
    printf("Transposed Matrix:\n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
