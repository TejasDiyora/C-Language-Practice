// Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.

#include<stdio.h>

void main(){
    int day, y, years, weeks, days;
    
    printf("Enter a number of days:");
    scanf("%d",&day);
    
    years = day / 365;
    weeks = (day % 365) / 7;
    days = day - (years * 365 + weeks * 7);
    
    printf("years : %d ",years);
    printf("\nweeks : %d ",weeks);
    printf("\ndays : %d ",days);

}