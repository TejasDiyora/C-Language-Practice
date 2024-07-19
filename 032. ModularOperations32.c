// Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.
// Test Data :
// Input an integer: 25
// Expected Output:
// 3
// 28
// 53
// 78

#include<stdio.h>

void main(){
    int integer, i;
    
    printf("Enter a number: ");
    scanf("%d",&integer);
    
    for(i=1; i<100; i++){
        if(i % integer == 3){
            printf("%d\n",i);
        }
    }  
}