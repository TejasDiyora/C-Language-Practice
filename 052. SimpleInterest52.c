// Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
// Test Data:
// Input Data: p = 10000, r = 10% , t = 12 year
// Expected Output:
// Input principle, Rate of interest & time to find simple interest:
// Simple interest = 12000

#include<stdio.h>

int main(){
    float p_amount, rate, t, simple_interest;
    
    printf("Enter a principle amount: ");
    scanf("%f",&p_amount);
    
    printf("Rate of interest(in %): ");
    scanf("%f",&rate);
    
    printf("Enter a time period(in years): ");
    scanf("%f",&t);
    
    simple_interest = (p_amount * rate * t) / 100;
    
    printf("Simple interest = %.3f",simple_interest);
}