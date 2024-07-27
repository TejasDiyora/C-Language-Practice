// Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number.
// Sample Input: 538453
// Sample Output:
// Input a number: The number of threes in the said number is 2

#include<stdio.h>
#include<string.h>

int main(){
    int i,n=0;
    char num[7];
    
    printf("Enter an integer (7 digits or fewer): ");
    scanf("%s",num);
    
    for(i=0;i<=6;i++){
        if(num[i] == '3'){
            n++;
        }
        else{
            continue;
        }
    }
    printf("The number of threes in the given number is %d",n);
}