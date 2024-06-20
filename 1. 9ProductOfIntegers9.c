// Write a C program that accepts two integers from the user and calculates the product of the two integers.

#include<stdio.h>

void main(){
    int first_integer, sec_integer, ans;
    
    printf("Enter first integer: ");
    scanf("%d",&first_integer);
    
    printf("Enter second integer: ");
    scanf("%d",&sec_integer);
    
    ans = first_integer * sec_integer;
    
    printf("Product of integers is %d", ans);
    
}