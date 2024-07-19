// Write a C program that accepts some integers from the user and finds the highest value and the input position.
// Test Data :
// Input 5 integers:
// 5
// 7
// 15
// 23
// 45
// Expected Output:
// Highest value: 45
// Position: 5

#include<stdio.h>

int main(){
    int arr[5], i, max,position;
    
    for(i=0;i<5;i++){
        printf("Enter a integer: ");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    position = 1;
    for(i=0;i<5;i++){
        if(arr[i] > max){
            max = arr[i];
            position = i+1;
        }
    }    
    printf("Highest value: %d",max);
    printf("\nPosition: %d",position);
    return 0;
}