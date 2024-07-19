// Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
// Test Data:
// Input the 5 members of the array:
// 15
// 20
// 25
// 30
// 35

// Expected Output:
// array_n[0] = 35
// array_n[1] = 30
// array_n[2] = 25
// array_n[3] = 20
// array_n[4] = 15

#include<stdio.h>

int main(){
    int i,array_n[10],s,temp;
    
    printf("Enter an size of array: ");
    scanf("%d",&s);
    
    for(i=0;i<=s;i++){
        printf("Enter an element in array: ");
        scanf("%d",&array_n[i]);
    }
    for(i=0;i<= s/2;i++){
        temp = array_n[i];
        array_n[i] = array_n[s-i];
        array_n[s-i] = temp;
        
    }
    for(i=0;i<=s;i++){
        printf("array_n[%d] = %d\n",i,array_n[i]);
    }
}