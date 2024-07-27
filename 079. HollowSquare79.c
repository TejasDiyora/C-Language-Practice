// Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using the hash (#) character.
// Sample Input: 10
// Sample Output:

// Input the size of the square: 
// # # # # # # # # # #
// #                 #
// #                 #
// #                 #
// #                 #
// #                 #
// #                 #
// #                 #
// #                 #
// # # # # # # # # # #

#include<stdio.h>

int main(){
    int i,j,size;
    
    printf("Enter a size of the hollow square: ");
    scanf("%d",&size);
    
    for(i=1;i<=size;i++){
        for(j=1;j<=size;j++){
            if (i==1 || i == size || j == 1 || j == size ){
                printf("# ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}