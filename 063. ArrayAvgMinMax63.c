// Write a C program that accepts integers from the user until a zero or a negative number, displays the number of positive values, the minimum value, the maximum value, and the average value.
// Input a positive integer:
// Input next positive integer: 15
// Input next positive integer: 25
// Input next positive integer: 37
// Input next positive integer: 43
// Number of positive values entered is 4
// Maximum value entered is 43
// Minimum value entered is 15
// Average value is 30.0000

#include<stdio.h>

int main(){
    int arr[1000],i,max,min,total=0,position=0;
    float avg;
    
    for(i=0;i<=1000;i++){
        printf("Enter a positive value:");
        scanf("%d",&arr[i]);
        
        if(arr[i] <= 0){
            break;    
        }
        else{
            position++;
        }
    }
    printf("\nNumber of positive value is %d",position);
    min = arr[0];
    for(i=0;i<=position-1;i++){
        if(arr[i] <= min){
            min = arr[i];
        }
    }
    printf("\nMinimum value is %d",min);
    max = arr[0];
    for(i=0;i<=position-1;i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    printf("\nMaximum value is %d",max);
    for(i=0;i<=position-1;i++){
        if(arr[i] > 0){
            total+= arr[i];
        }
    }
    avg = total / position;
    printf("\nAverage of positive values is %.2f",avg);
}