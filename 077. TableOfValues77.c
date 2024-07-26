// Write a C program using looping to produce the following table of values.
// Sample Output:

// x       x+2     x+4     x+6
// --------------------------------
// 1       3       5       7
// 4       6       8       10
// 7       9       11      13
// 10      12      14      16
// 13      15      17      19

#include<stdio.h>

int main(){
    int i;
    
    printf("x        x+2      x+4      x+6");
    printf("\n--------------------------------");
    
    for(i=1;i<=13;i+=3){
        printf("\n%-8d %-8d %-8d %-8d",i,i+2,i+4,i+6);
    }
}
