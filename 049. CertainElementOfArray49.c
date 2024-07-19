// Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
// Test Data:
// Input the 5 members of the array:
// 15
// 25
// 4
// 35
// 40
// Expected Output:
// A[2] = 4.0

#include<stdio.h>

int main(){
    int i,num[4];
    
    for(i=0;i<=4;i++){
        printf("Enter an elment in array: ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<=4;i++){
        if(num[i] < 5){
            printf("num[%d] = %d\n",i,num[i]);
        }
        else{
            continue;
        }
    }
}