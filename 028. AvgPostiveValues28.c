// Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
// Test Data :
// Input the first number: 5
// Input the second number: 8
// Input the third number: 10
// Input the fourth number: -5
// Input the fifth number: 25
// Expected Output:
// Number of positive numbers: 4
// Average value of the said positive numbers: 12.00

#include<stdio.h>

void main(){
    int i, pos = 0, arr[5], avg, sum = 0;
    
    for(i=0;i<5;i++){
        
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
        
        if(arr[i] > 0){
            pos++;
            sum += arr[i];
            continue;
        }
        else{
            continue;
        }
    }
    for(i=0; i<5;i++){
        if(arr[i] > 0){
            avg = sum / pos;
        }
        else{
            continue;
        }
    }
    printf("Numebr of positive values %d", pos);
    printf("\nAverage of positive numbers is %d", avg);

}