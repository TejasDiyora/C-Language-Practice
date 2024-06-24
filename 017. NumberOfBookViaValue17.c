// Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
// Test Data :
// Input the amount: 375
// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00
// 0 Note(s) of 2.00
// 0 Note(s) of 1.00

#include<stdio.h>

void main(){
    int amount,a,b,c,d,e,f,g;
    
    printf("Enter a amount: ");
    scanf("%d",&amount);
    
    a = amount / 100;
    b = (amount - (a*100)) / 50;
    c = ((amount - (a*100)) % 50) / 20;
    d = (((amount - (a*100)) % 50) % 20) / 10; 
    e = (((amount - ((a*100)) % 50) % 20) % 10) / 5 ;
    f = ((((amount - ((a*100)) % 50) % 20) % 10) % 5) / 2;
    g = (((((amount - ((a*100)) % 50) % 20) % 10) % 5) % 2) / 1;
    
    printf("%d note(s) of 100.00",a);
    printf("\n%d note(s) of 50.00",b);
    printf("\n%d note(s) of 20.00",c);
    printf("\n%d note(s) of 10.00",d);
    printf("\n%d note(s) of 5.00",e);
    printf("\n%d note(s) of 2.00",f);
    printf("\n%d note(s) of 1.00",g);

}