// Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
// Test Data :
// Input no. of days: 2535
// Expected Output:
// 6 Year(s)
// 11 Month(s)
// 15 Day(s)

#include<stdio.h>

void main(){
    int day, years, months, days;
    
    printf("Enter number of days: ");
    scanf("%d",&day);
    
    years = day / 365;
    months = (day % 365) / 30;
    days = (day % 365) % 30;
    
    printf("%d Year(s)", years);
    printf("\n%d Month(s)",months);
    printf("\n%d Day(s)",days);
}