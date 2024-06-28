// Write a C program that reads two integers and checks whether they are multiplied or not.
// Test Data :
// Input the first number: 5
// Input the second number: 15
// Expected Output:
// Multiplied!

#include<stdio.h>

void main(){
    int first_number, second_number, answer;
    
    printf("Enter first number: ");
    scanf("%d", &first_number);
    
    printf("Enter second number: ");
    scanf("%d", &second_number);
    
    if (first_number > second_number){
        if (first_number % second_number == 0){
            printf("Multiplied!");
        } 
        else{
            printf("Not multiplied!");
        }
    }
    else{
        if (second_number % first_number == 0){
            printf("Multiplied!");
        }
        else{
            printf("Not multiplied!");
        }
    }
}