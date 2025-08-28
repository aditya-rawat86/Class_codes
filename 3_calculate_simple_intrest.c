    /*Write a program to calculate simple  for given principal, rate, and time.*/

    #include <stdio.h>
        int main()
    {
        float p,r,t,si; //p=principal, r=rate, t=time, si=simple intrest, ci=compound intrest
        
        printf("Enter principal = ");
        scanf("%f",&p);
        printf("Enter rate = ");
        scanf("%f",&r);
        printf("Enter time(in years) = ");
        scanf("%f",&t);

        si=p*r*t/100;
       
        printf("Simple Intrest = %.2f",si);
        
        return 0;
    }