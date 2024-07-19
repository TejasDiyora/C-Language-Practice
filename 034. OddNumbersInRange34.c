// Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
// Test Data :
// Input a pair of numbers (for example 10,2):
// Input first number of the pair: 10
// Input second number of the pair: 2
// Expected Output:
// List of odd numbers: 3
// 5
// 7
// 9
// Sum=24

#include<stdio.h>

int main(){
    int first_no, second_no, i, sum=0;
    
    printf("Enter a first number of pair: ");
    scanf("%d",&first_no);
    
    printf("Enter a second number of pair: ");
    scanf("%d",&second_no);
    if(first_no > second_no){
        for(i=second_no ; i < first_no ; i++){
            if(i % 2 == 1){
                printf("%d\n",i);
                sum+=i;
            }
            else{
                continue;
            }
        }
        printf("Sum: %d",sum);
    }
    else if(first_no < second_no){
        for(i=first_no ; i < second_no ; i++){
            if(i % 2 == 1){
                printf("%d\n",i);
                sum+=i;
            }
            else{
                continue;
            }
        }
        printf("Sum: %d",sum);
    }
}