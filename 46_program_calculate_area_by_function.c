/*Program to calculate the area of the square.*/

#include <stdio.h>
void area_square(int side)
{
    int a;
    a=side*side;
    printf("Area of square = %d",a);

    return;

}

int main()
{
    int s;
    printf("Enter side of square to find area = ");
    scanf("%d",&s);

    area_square(s);

    return 0;
}