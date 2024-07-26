// Write a C program that accepts a seven-digit number, separates the number into its individual digits, and prints the digits separated from one another by two spaces each.
// Sample Input: 2345678
// Input a seven digit number:
// Output: 2 3 4 5 6 7 8

#include<stdio.h>

int main(){
    char number[7],i;
    
    printf("Enter a number: ");
    scanf("%s",number);
    
    for(i=0;i<=6;i++){
        printf("%c ",number[i]);
    }
}