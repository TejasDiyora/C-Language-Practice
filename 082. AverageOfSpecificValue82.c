// Write a C program to calculate and print the average of some integers. Accept all the values preceding 888.
// Sample Input:12
// 15
// 24
// 888
// Sample Output:
// Input each number on a separate line (888 to exit):

// The average value of the said numbers is 17.000000

#include<stdio.h>

int main(){
    int num[100],size,i;
    float avg,n=0,total=0;
    
    printf("Enter a number of values you want to enter: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        printf("Enter a number: ");
        scanf("%d",&num[i]);
        
        if(num[i] < 888){
            total+= num[i];
            n++;
        }
        else{
            continue;
        }
    }
    avg = total / n;
    printf("\nThe average of specific values is %.3f",avg);
}