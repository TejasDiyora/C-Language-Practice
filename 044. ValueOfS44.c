// Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
// Expected Output:
// Value of S: 4.50

#include<stdio.h>

int  main(){
    float i,sum=0;
    
    for(i=1;i<=50;i++){
        sum += 1/i;
    }
    printf("Value of S: %f",sum);
}