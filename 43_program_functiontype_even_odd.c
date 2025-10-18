/*write a program to accept two values from a user pass these values to the function to compute the sum of these number 
return the sum and evaluate whether the returnn number is even or odd using another fnction*/

#include <stdio.h>
    void sum(int a,int b)
{
    int s;
    void even_odd(int n);
    s=a+b;
    printf("Sum is %d\n",s);
    even_odd(s);
}

void even_odd(int n)
{
    if(n%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
    int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}