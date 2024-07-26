// Write a C program that accepts principal amount, rate of interest and days for a loan and calculates the simple interest for the loan, using the following formula.
// interest = principal * rate * days / 365.
// Sample Input:
// 10000
// .1
// 365
// 0
// Sample Output:
// Input loan amount (0 to quit): Input interest rate: Input term of the loan in days: The interest amount is $1000.00
// Input loan principal_amt (0 to quit):

#include<stdio.h>

int main(){
    float prinp_amt,rate,interest;
    int days;
    
    printf("Enter a loan amount: ");
    scanf("%f",&prinp_amt);
    
    printf("Enter a rate of interest: ");
    scanf("%f",&rate);
    
    printf("Enter a term of the loan in days: ");
    scanf("%d",&days);
    
    printf("The interst amount is $%.2f",(prinp_amt * rate * days) / 365);
}