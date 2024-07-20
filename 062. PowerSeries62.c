// Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 1*4 + 24 + 44 + 74 + 114 + • • • + m*4. In this case, m is less than or equal to n. Print an appropriate message.
// Input a positive number less than 100: 68
// Sum of the series is 37361622

#include<stdio.h>
#include<math.h>

int main(){
    int i,sum=0,ser_i=1,n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        ser_i += i ;
        if(ser_i <= n){
            sum = sum + pow(ser_i,4);
        }
        printf("%d\n",ser_i);
    }
    printf("Sum of the series is: %d\n",sum);
}