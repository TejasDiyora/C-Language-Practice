// Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".
// Test Data :
// Input two numbers:
// x: 25
// y: 5
// Expected Output: 5.0

#include<stdio.h>

int main(){
    float first_no, second_no, division;
    
    printf("Enter a first number: ");
    scanf("%f",&first_no);
    
    printf("Enter a second number: ");
    scanf("%f",&second_no);
    
    division = (first_no) / (second_no);
    
    if (division >= 1){
        printf("division: %f",division);
    }
    else{
        printf("Division is not possible");
    }
}