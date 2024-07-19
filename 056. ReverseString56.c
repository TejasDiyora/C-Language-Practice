// Write a C program to reverse and print a given number.
// Input a number:
// The original number = 234
// The reverse of the said number = 432

#include<stdio.h>
#include<string.h>

int main(){
    char number[100];
    int length,i,temp;
    
    printf("Enter a number: ");
    scanf("%s",number);
    
    length = strlen(number);
    
    for(i=0;i<=strlen(number)/2;i++){
        temp = number[i-1];
        number[i-1] = number[strlen(number) - i];
        number[strlen(number) - i] = temp;
        
    }
    printf("The reverse of the said number = %s",number);
}