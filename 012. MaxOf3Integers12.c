// Write a C program that accepts three integers and finds the maximum of three.

#include<stdio.h>

void main(){
    int int1, int2, int3;
    
    printf("Enter three integer number: ");
    scanf("%d %d %d", &int1, &int2, &int3);
    
    if (int1 > int2){
        if (int1 > int3){
            printf("%d", int1);
        }
        else{
            printf("%d", int3);
        }
    }
    else{
        
        if (int2 < int3){
            printf("%d", int3);
        }
        else {
        printf("%d", int2);
        }
    }    
}
