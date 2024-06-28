// Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
// Test Data :
// Input the first number: 5
// Input the second number: -4
// Input the third number: 10
// Input the fourth number: 15
// Input the fifth number: -1
// Expected Output:
// Number of positive numbers: 3
// Number of negative numbers: 2

#include<stdio.h>

void main(){
    int arr[5], i, pos_num, neg_val, neg = 0, pos = 0, o_value = 0;
    
    for(i=0 ; i<5 ; i++){
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        
        if(arr[i] > 0){
            pos++;
        }
        else if(arr[i] < 0){
            neg++;
        }
        else{
            o_value++;
        }
    }
    printf("\nNumber of positive values: %d", pos);
    printf("\nNumber of negative values: %d", neg);
    printf("\nNumber of zeros: %d", o_value);
}