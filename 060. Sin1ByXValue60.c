// Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places.
// Input value of x: .6235
// // Value of sin(1/x) is 0.9995

#include<stdio.h>
#include<math.h>

int main(){
    float x, sin_val;
    
    printf("Enter a value of x: ");
    scanf("%f",&x);
    
    if(x != 0.0){
        sin_val = sin(1/x);
        printf("Value of sin(1/%f) = %.4f",x,sin_val);
    }
    else{
        printf("Value of x Can not be zero");
    }
}