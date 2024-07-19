// Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 45
// Expected Output:
// 30
// 31
// 37
// 38
// 44

#include<stdio.h>

int main(){
    int first_no, second_no, i;
    
    printf("Enter a first number: ");
    scanf("%d",&first_no);
    
    printf("Enter a second number: ");
    scanf("%d",&second_no);
    
    for(i=first_no; i < second_no; i++){
        if (i % 7 == 2 || i % 7 == 3){
            printf("\n%d", i);
        }
        else{
            continue;
        }
    }
    return 0;
}