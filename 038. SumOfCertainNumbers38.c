// Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
// Test Data :
// Input the first integer: 50 Input the second integer: 99
// Expected Output:
// Sum: 3521

#include<stdio.h>

int main(){
    int first_no, second_no, i, sum = 0;
    
    printf("Enter first number and second number : ");
    scanf("%d %d",&first_no, &second_no);
    
    for(i=first_no; i <= second_no; i++){
        if(i % 17 != 0){
            sum+=i;
        }
        else{
            continue;
        }
    }
    printf("Sum = %d",sum);
}