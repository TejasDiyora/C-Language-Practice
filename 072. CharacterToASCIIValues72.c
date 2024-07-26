// Write a C program to display the integer equivalents of letters (a-z, A-Z).
// Sample Output:
// List of integer equivalents of letters (a-z, A-Z).
// ==================================================
// 97 98 99 100 101 102
// 103 104 105 106 107 108
// 109 110 111 112 113 114
// 115 116 117 118 119 120
// 121 122 32 65 66 67
// 68 69 70 71 72 73
// 74 75 76 77 78 79
// 80 81 82 83 84 85
// 86 87 88 89 90

#include<stdio.h>
#include<string.h>

int main(){
    char str[]= "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    

    for(n=0;n<=strlen(str) - 1;n++){
        printf("%d\t",str[n]);
        if((n+1) % 6 == 0){
            printf("\n");
        }
    }
} 