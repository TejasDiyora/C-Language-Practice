// write a program to get name, DOB and Contact No from the user.
#include<stdio.h>
#include<string.h>

void main(){
    char fn[50], ln[50];
    char date[3], month[10], year[5];
    char code[5], no[15];
    
    printf("fname \nlname \ndate : month : year: \nEnter country code: and Enter your phone number: ");
    scanf("%49s %49s %2s %9s %4s %4s %14s", fn, ln, date, month, year, code, no);

    printf("\nFull name: %s %s", fn, ln);
    printf("\nDOB: %s %s %s", date, month, year);
    printf("\nMob No: %s%s", code, no);

}