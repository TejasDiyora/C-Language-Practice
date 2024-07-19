// Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
// Expected Output:
// Value of series: 4.62

#include<stdio.h>
#include<math.h>
void main(){
    float value_of_series = 1 ;
    float i,j;
    
    for(i=1;i<=3;i++){
        value_of_series += (2*i+1) / pow(2, i);
    }
    printf("Value of series: %f",value_of_series);
}    