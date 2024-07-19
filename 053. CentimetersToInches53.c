// Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
// Test Data:
// Input Data: 500cms
// Input the distance in cm:
// Distance of 500.00 cms is = 196.85 inches

#include<stdio.h>

int main(){
    float distance_centimeters, distance_inches;
    
    printf("Enter distance in centimeters: ");
    scanf("%f",&distance_centimeters);
    
    printf("Distance in inches: %.2f", distance_centimeters * 0.39370079);
}