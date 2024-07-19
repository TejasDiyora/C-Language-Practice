// Write a C program that finds all the divisors of an integer.
// Test Data:
// Input an integer: 45
// Expected Output:
// All the divisor of 45 are:
// 1
// 3
// 5
// 9
// 15
// 45

#include<stdio.h>

int main(){
    int i,number,value;
    
    printf("Enter an integer: ");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++){
        if(number % i == 0){
            printf("%d\n",i);
        }
    }
}