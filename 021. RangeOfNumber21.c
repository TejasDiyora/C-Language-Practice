// Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
// Test Data :
// Input an integer: 15
// Expected Output:
// Range [0, 20]

#include<stdio.h>

void main(){
    int number;
    
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if (number > 80 && number < 0){
        printf("Error");
    }
    else if(number <= 20){
        printf("Range [0, 20]");
    }
    else if(number <= 40){
        printf("Range [21, 40]");
    }
    else if(number <= 60){
        printf("Range [41, 60]");
    }
    else if(number <= 80){
        printf("Range [61, 80]");
    }
}