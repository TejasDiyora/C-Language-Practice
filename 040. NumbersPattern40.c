//  Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
// Test Data :
// Input number of lines: 5
// Expected Output:
// 1 2 3
// 4 5 6
// 7 8 9
// 10 11 12
// 13 14 15

#include<stdio.h>

int main(){
    int i, line, num;
    
    printf("Enter a number of line: ");
    scanf("%d",&line);
    
    num = 3*line;
    
    for(i = 1; i < num; i+=3){
        printf("\n%d %d %d",i,i+1,i+2);
    }
    return 0;
}