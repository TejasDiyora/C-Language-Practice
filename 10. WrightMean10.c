// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.

#include<stdio.h>

void main(){
    float weight_mean, num1, phr1, num2, phr2;; 
    
    printf("Enter a number 1: "); 
    scanf("%f",&num1);
    
    printf("it's phrase 1: ");
    scanf("%f",&phr1);
    
    printf("Enter a number 2: "); 
    scanf("%f",&num2);
    
    printf("it's phrase 2: ");
    scanf("%f",&phr2);
    
    weight_mean = ((num1 * phr1) + (num2 * phr2)) / (phr1 + phr2) ;
    
    printf("Weight mean is %f", weight_mean);
}