// Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
// Test Data :
// Input an integer: 13
// Expected Output:
// Positive Odd

#include<stdio.h>

void main(){
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number < 0 && number % 2 == 0){
        printf("Negative Even");
    }
    else if (number < 0 && number % 2 != 0){
        printf("Negative Odd");
    }
    else if (number > 0 && number % 2 == 0){
        printf("Positive Even");
    }
    else if (number > 0 && number % 2 != 0){
        printf("Positive Odd");
    }
    else if (number == 0){
        printf("even");
    }
}