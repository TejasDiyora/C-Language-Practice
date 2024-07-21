// Write a C program that prints out the prime numbers between 1 and 200. The output should be such that each row contains a maximum of 10 prime numbers
// Expected output:
// The prime numbers between 1 and 199 are:
// 2 3 5 7 11 13 17 19 23 29
// 31 37 41 43 47 53 59 61 67 71
// 73 79 83 89 97 101 103 107 109 113
// 127 131 137 139 149 151 157 163 167 173
// 179 181 191 193 197

#include<stdio.h>

int main(){
    int i,j,isprime,position=0;
    
    printf("All prime numbers between 1 to 200: \n ");
    
    for(i=2;i<199;i++){
        isprime = 1;
        for(j=2;j<=i/2;j++){
            if(i % j == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
                printf("%d\t",i);
                position++;
                if(position == 10){
                    printf("\n");
                    position = 0;
                }
        }
    }
}