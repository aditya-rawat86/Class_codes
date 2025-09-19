/*Write a program to accept two numbers with a gap of 10 and store even and odd numbers in separate arrays*/

#include <stdio.h>
int main()
{
    int num1, num2, even[5], odd[5], i, even_count = 0, odd_count = 0;
    printf("Enter two numbers with a gap of 10 (separated by spaces): ");
    scanf("%d %d", &num1, &num2);

    if(num1 >= num2 || (num2 - num1) != 10) {
        printf("Invalid input. Please ensure the first number is less than the second number and the gap is exactly 10.\n");
        return 0;
    }

    for(i = num1; i <= num2; i++)
    {
        if(i % 2 == 0 && even_count < 5)
        {
            even[even_count++] = i;
        }
        else if(i % 2 != 0 && odd_count < 5)
        {
            odd[odd_count++] = i;
        }
    }

    printf("Even numbers: ");
    for(i = 0; i < even_count; i++)
        printf("%d ", even[i]);
    printf("\n");

    printf("Odd numbers: ");
    for(i = 0; i < odd_count; i++)
        printf("%d ", odd[i]);
    printf("\n");

    return 0;
}