// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
// Test Data :
// Input seconds: 25300
// Expected Output:
// There are:
// H:M:S - 7:1:40

#include<stdio.h>

void main(){
    int second, hours,minutes,seconds;
    
    printf("Enter a count of second(s): ");
    scanf("%d",&second);
    
    hours = second / 3600;
    minutes = (second % 3600) / 60;
    seconds = (second % 3600) % 60;
    
    printf("%d:%d:%d",hours,minutes,seconds);
    
}