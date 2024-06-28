// Write a C program that read 5 numbers and sum of all odd values between them.
// Test Data :
// Input the first number: 5
// Input the second number: 7
// Input the third number: 9
// Input the fourth number: 10
// Input the fifth number: 13
// Expected Output:
// Sum of all odd values: 34

#include<stdio.h>

void main(){
    int arr[5], sum = 0, i ; 
    
    for(i=0; i<5; i++){
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
        
        if (arr[i] % 2 != 0){
            sum += arr[i];
            continue;
        }
        else{
            continue;
        }
    }
    printf("Sum of all odd values is %d", sum);
}