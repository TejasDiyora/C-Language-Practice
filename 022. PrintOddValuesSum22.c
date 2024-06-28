// Write a C program that reads 5 numbers and sums all odd values between them.
// Test Data :
// Input the first number: 11
// Input the second number: 17
// Input the third number: 13
// Input the fourth number: 12
// Input the fifth number: 5
// Expected Output:
// Sum of all odd values: 46

#include<stdio.h>

void main(){
    int num[5], i, sum_of_odd = 0;
     
    for(i = 0;i < 5; i++){
        printf("Enter a number: ");
        scanf("%d",&num[i]);
        
        if(num[i] % 2 == 1){
            sum_of_odd = sum_of_odd + num[i];
        }
    }
    printf("Sum of all odd values: %d",sum_of_odd);
    
}