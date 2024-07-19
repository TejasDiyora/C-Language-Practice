// Write a C program that reads and prints the elements of an array of length 7. Before printing, replace every negative number, zero, with 100.
// Test Data:
// Input the 5 members of the array:
// 25
// 45
// 35
// 65
// 15
// Expected Output:
// Array values are:
// n[0] = 25
// n[1] = 45
// n[2] = 35
// n[3] = 65
// n[4] = 15

#include<stdio.h>

int main(){
    int num[6],i,size;
    
    printf("Enter a size of array: ");
    scanf("%d",&size);
    
    for(i=0;i <= size;i++){
        printf("Enter a number: ");
        scanf("%d",&num[i]);
    }
    
    printf("Array values are:");
    
    for(i=0;i<=size;i++){
        if(num[i] > 0){
            num[i]=num[i];
        }
        else{
            num[i] = 100;
        }
        printf("\nn[%d] = %d",i,num[i]);
    }
}    