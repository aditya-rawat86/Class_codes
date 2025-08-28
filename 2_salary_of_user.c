/*Write a program to take value of basic salary from a user and compute the gross salary
 and net salary of the employee on the basis of following condition....
 1- HRA 31% of basic
 2- DA 20% of basic 
 3- Incentive 7000 rupees
 4- Loan repayment 14014 rupees
 5- Income tax reduction say 10% basic. */

#include <stdio.h>
    int main()
{
    float B_salary,HRA,DA,Incentive=7000,Loan=14014,Income_Tax;
    printf("Enter your basic salary = ");
    scanf("%f",&B_salary);
    
    HRA=0.31*B_salary;
    DA=0.2*B_salary;
    Income_Tax=0.1*B_salary;
    
    float Gross_salary=B_salary+HRA+DA+Incentive;
    float Net_salary=Gross_salary-(Loan+Income_Tax);
   
    printf("......Salary_Details......\n");
    printf("HRA 31 percent of basic is = %.2f\n",HRA);
    printf("DA 20 percent of basic is = %.2f\n",DA);
    printf("Income tax reduction in the basic is = %.2f\n",Income_Tax);
    printf("Gross salary = %.2f\n",Gross_salary);
    printf("Net salary = %.2f\n",Net_salary);
    
    return 0;
}