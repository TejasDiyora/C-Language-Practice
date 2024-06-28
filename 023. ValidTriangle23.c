// Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
// Test Data :
// Input the first number: 25
// Input the second number: 15
// Input the third number: 35
// Expected Output:
// Perimeter = 75.0

#include<stdio.h>

void main(){
    int first_number, second_number, third_number, perimeter;
    
    printf("Enter a first number: ");
    scanf("%d",&first_number);
    
    printf("Enter a second number: ");
    scanf("%d",&second_number);
    
    printf("Enter a third number: ");
    scanf("%d",&third_number);
    
    if (first_number < second_number + third_number && second_number < first_number + third_number && third_number < second_number + first_number){
        
        perimeter = first_number + second_number + third_number;
        printf("Perimeter = %d", perimeter);
        
    }
    else{
        printf("With these perimeter triangle is not possible to structured");
    }
    
}