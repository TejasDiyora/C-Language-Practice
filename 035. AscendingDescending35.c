// Write a C program to check if two numbers in a pair are in ascending order or descending order.
// Test Data :
// Input a pair of numbers (for example 10,2 : 2,10):
// Input first number of the pair: 10
// Input second number of the pair: 2
// Expected Output:
// The pair is in descending order!

#include<stdio.h>

int main(){
    int first_no, second_no;
    
    printf("Enter a first number of pair: ");
    scanf("%d",&first_no);
    
    printf("Enter a second number of pair: ");
    scanf("%d",&second_no);
    
    if(first_no > second_no){
        printf("The pai is in descending order!");
    }
    else{
        printf("The pair is in ascending order!");
    }
}    