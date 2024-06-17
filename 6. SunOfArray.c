//Write a program to print a sum of an array elements.

#include<stdio.h>

void main(){
    int arr[100], sum=0,i,size;
    
    printf("Enter size of an array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        printf("Enter elements in array: ");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
        
    }
    printf("Sum of an array is %d",sum);
}