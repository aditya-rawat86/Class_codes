#include <stdio.h>
    int main()
{
    int n1=0,n2=1,n3,num,i;
    printf("Enter number for fivonacci series = ");
    scanf("%d",&num);
    
   
    
    printf("%d %d ",n1,n2);

    for(i=2;i<=13;i++)
    {
        n3=n1+n2;
        printf(" %d ",n3);
        if (n3==num)
        {
            printf("\n %d Is present\n ",n3);
            break;
        }
        else
        {
            n1=n2;
            n2=n3;
        }
    }

    return 0;
}