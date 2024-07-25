// Write a C program to remove any negative sign in front of a number.
// Input a value (negative):
// Original value = -253
// Absolute value = 253

#include<stdio.h>

int main(){
    int org_val, abs_val;
    
    printf("Enter a negative number: ");
    scanf("%d",&org_val);
    
    if (org_val < 0){
        abs_val = org_val - (2 * org_val);
    }
    else{
        abs_val = org_val;
    }
    printf("Absolute value is: %d",abs_val);
}