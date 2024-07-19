// Write a C program to read an array of length 6 and find the smallest element and its position.
// Test Data:
// Input the length of the array: 5 Input the array elements:
// 25
// 35
// 20
// 14
// 45
// Expected Output:
// Smallest Value: 14
// Position of the element: 3

#include<stdio.h>

int main(){
    int i,array[4],min,position;
    
    for(i=0;i<=4;i++){
        printf("Enter an element: ");
        scanf("%d",&array[i]);
    }
    min = array[0];
    position = 0;
    for(i=0;i<=4;i++){
        if(array[i] <= min){
            min = array[i];
            position = i+1;
        }
    }    
    printf("Smallest Value: %d\n",min);
    printf("Position of the element is: %d",position);
}