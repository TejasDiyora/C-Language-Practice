// Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers.
// Input four numbers: 1.54 1.236 1.3625 1.002
// Difference is 0.5380

#include<stdio.h>

int main(){
    float number[4],min,max,difference;
    int i;
    
    for(i=0;i<=3;i++){
        printf("Enter a number: ");
        scanf("%f",&number[i]);
    }
    min = number[0];
    for(i=0;i<=3;i++){
        if(number[i] <= min){
            min = number[i];
        }
    }
    max = number[0];
    for(i=0;i<=3;i++){
        if(number[i] >= max){
            max = number[i];
        }
    }
    printf("Difference between maximum and minimum number is: %f\n",max - min);
}