// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.

#include<stdio.h>

void main(){
    int Emp_Id, Hrs_per_month, Salary_per_hrs, Total_salary;
    
    printf("Enter employee's ID (Max 10 numbers): ");
    scanf("%d",&Emp_Id);
    
    printf("Enter your total hours in a month: ");
    scanf("%d", &Hrs_per_month);
    
    printf("Enter your salary per hours: ");
    scanf("%d", &Salary_per_hrs);
    
    Total_salary = Salary_per_hrs * Hrs_per_month;
    
    printf("Employees ID = %d",Emp_Id);
    printf("\nUs $ Salary = %d",Total_salary);
    
}