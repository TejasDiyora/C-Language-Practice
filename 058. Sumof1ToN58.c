// Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n.

#include<stdio.h>

int main(){
    int n;
    float sum=1,i;
    
    printf("Enter a series number up to you want to go: ");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++){
        sum = sum + (1/i) ;
    }
    printf("Sum: %.2f",sum);
}