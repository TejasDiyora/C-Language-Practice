// Write a C program to evaluate the equation y=xn when n is a non-negative integer.
// Input the values of x and n: 256
// x=256.000000; n=0;
// x to power n=1.000000

#include<stdio.h>
#include<math.h>

int main(){
    float x,n,y;
    
    printf("Enter a values of x and n:");
    scanf("%f %f",&x,&n);
    
    y = pow(x,n);
    
    printf("\nx to power n is %f",y);
}