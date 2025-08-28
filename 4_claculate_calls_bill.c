/*Write a program to calculate the telephone bill of a customer after accepting number
 of calls from the user.
 1- First 75 calls free.
 2- Next 125 calls will be charge with 1rupee per call.
 3- 201 to 300 will be charge 2rupee per call.
 4- 301 to 400 will be charge 4rupee per call.
 5- After 400 will be charge 6rupee per call.*/

#include <stdio.h>
    int main()
{
    int n_c,bill;

    printf("Enter number of calls made = ");
    scanf("%d",&n_c);

    if(n_c>=0 && n_c<=75)
    {
        printf("No amount needed to be paid\n");
    }
    else if(n_c>75 && n_c<=200)
    {
        bill=(n_c-75)*1;
        printf("Bill needed to be paid = %d\n",bill);
    }
    else if(n_c>=201 && n_c<=300)
    {
        bill=(n_c-200)*2+125;
        printf("Bill needed to be paid = %d\n",bill);
    }
    else if(n_c>=301 && n_c<=400)
    {
        bill=(n_c-300)*4+125+200;
        printf("Bill needed to be paid = %d\n",bill);
    }
    else
    {
        bill=(n_c-400)*6+125+200+400;
        printf("Bill needed to be paid = %d\n",bill);
    }

    return 0;
}

