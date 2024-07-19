// Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.
// Test Data :
// Input number of lines: 5
// Number of characters in a line: 6
// Expected Output:
// 1 2 3 4 5 6
// 7 8 9 10 11 12
// 13 14 15 16 17 18
// 19 20 21 22 23 24
// 25 26 27 28 29 30

// #include<stdio.h>

// int main(){
//     int character, line, i, j=1, n=1;
    
//     printf("Enter number of line: ");
//     scanf("%d",&line);
    
//     printf("Enter a number of character in line: ");
//     scanf("%d",&character);
    
//     for(i = 1;i <= line; i++){
//         for(j; j <= character ; j++){
//             printf("%d  ",j);
//             }
//             printf("\n");
//         character+=character;
//         j+=1;
//     }
// }

#include<stdio.h>

int main(){
    int line, character, i;
    
    printf("Enter a number of line;");
    scanf("%d",&line);
    
    printf("Enter a number of char in a line;");
    scanf("%d",&character);
    
    for(i=1;i<=character*line;i++){
        printf("%d  ",i);
        if(i % character == 0){
            printf("\n");
        }
        else{
            continue;
        }
    }
    
    
}