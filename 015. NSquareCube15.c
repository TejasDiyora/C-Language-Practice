// Write a C program to print a number, its square and cube, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.

#include<stdio.h>

void main(){
    int n, cube, square,i;
    
    printf("Enter a number of lines");
    scanf("%d",&n);
    
    for(i=1;i<n+1;i++){
        square = i * i;
        cube = i * i * i;
        
        printf("%i %d %d\n",i,square,cube);
    }
}