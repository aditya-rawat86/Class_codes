/*To calculate the total income of an employee through various sources 

1- Through organization stores employee name, employee id, salary,
commission, overtime, no of day he she overworked , and deduct salary when he she was absent

2- Through contractor ,store contract id ,name of project,duration of project , set 8 milestones, 
uniformly for 10 days each and if the project is delay by n number of days deduct the salary of each day 

[use nested structure for calculating both salary]*/

#include <stdio.h>

struct organization
{
    char employee_name[30];
    int employee_id;
    float salary;
    float commission;
    int overtime_days;
    int absent_days;
};

struct contractor
{
    int contract_id;
    char project_name[30];
    int project_duration;
    int milestones;
    int delay_days;
    float daily_deduction;
    float project_payment;
};

struct employee
{
    struct organization org;
    struct contractor con;
};

int main()
{
    struct employee emp;

    printf("------ Organization Employee Details ------\n");
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.org.employee_name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.org.employee_id);
    printf("Enter salary: ");
    scanf("%f", &emp.org.salary);
    printf("Enter commission: ");
    scanf("%f", &emp.org.commission);
    printf("Enter number of overtime days: ");
    scanf("%d", &emp.org.overtime_days);
    printf("Enter number of absent days: ");
    scanf("%d", &emp.org.absent_days);

    printf("\n------ Contractor Details ------\n");
    printf("Enter contract ID: ");
    scanf("%d", &emp.con.contract_id);
    printf("Enter project name: ");
    scanf(" %[^\n]", emp.con.project_name);
    printf("Enter project duration (in days): ");
    scanf("%d", &emp.con.project_duration);
    printf("Enter number of milestones (max 8): ");
    scanf("%d", &emp.con.milestones);
    if(emp.con.milestones > 8) {
        printf("Milestones cannot exceed 8. Setting to 8.\n");
        emp.con.milestones = 8;
    }
    printf("Enter total project payment: ");
    scanf("%f", &emp.con.project_payment);
    printf("Enter delay days: ");
    scanf("%d", &emp.con.delay_days);
    printf("Enter daily deduction for delay: ");
    scanf("%f", &emp.con.daily_deduction);

    printf("\nCalculating total income...\n");
    float daily_salary = emp.org.salary / 30; 
    float total_salary_org = emp.org.salary + emp.org.commission
                           + (emp.org.overtime_days * daily_salary)
                           - (emp.org.absent_days * daily_salary);

    float total_salary_con = emp.con.project_payment - (emp.con.delay_days * emp.con.daily_deduction);

    float total_income = total_salary_org + total_salary_con;

    printf("\n------ Salary Details ------\n");
    printf("Total salary from organization : %.2f\n", total_salary_org);
    printf("Total salary from contractor project '%s': %.2f\n", emp.con.project_name, total_salary_con);
    printf("------------------------------------------------\n");
    printf("Total income of employee %s (ID: %d) : %.2f\n", emp.org.employee_name, emp.org.employee_id, total_income);

    return 0;
}
