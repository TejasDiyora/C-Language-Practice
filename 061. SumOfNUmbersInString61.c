// Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
// Input a positive number less than 500:
// Sum of the digits of 347 is 14

#include<stdio.h>
#include<string.h>

int main(){
    char num[100];
    int length,i,sum=0;
    
    printf("Enter a positive number: ");
    scanf("%s",num);
    
    length = strlen(num);
    
    for(i=0;i<length;i++){
        sum += num[i] - '0';
    }
    printf("Sum of the digits of %s = %d",num,sum);
}