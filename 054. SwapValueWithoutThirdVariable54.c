// Write a C program that swaps two numbers without using a third variable.
// Input value for x & y:
// Before swapping the value of x & y: 5 7
// After swapping the value of x & y: 7 5

#include<stdio.h>

int main(){
    int x,y;
    
    printf("Enter a value of x and y: ");
    
    scanf("%d %d",&x,&y);
    printf("Before swapping the value of x & y: %d %d\n",x,y);
    printf("After swapping the value of x & y: %d %d",y,x);
}