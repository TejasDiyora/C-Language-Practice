// Write a C program that reads two integers and checks whether the first integer is a multiple of the second integer.
// Sample Input: 9 3
// Sample Output:
// Input the first integer : Input the second integer:
// 9 is a multiple of 3.

#include<stdio.h>

int main(){
    int int1,int2;
    
    printf("Enter a integer 1 :");
    scanf("%d",&int1);
    
    printf("Enter a integer 2 :");
    scanf("%d",&int2);
    
    if(int1 % int2 == 0){
        printf("%d is a multiple of %d",int1,int2);
    }
    else{
        printf("%d is not a multiple of %d",int1,int2);
    }
}