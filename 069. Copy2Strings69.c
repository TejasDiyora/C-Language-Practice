// Write a C program to copy a given string into another and count the number of characters copied.
// Input a string
// Original string: w3resource
// Number of characters = 10

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    
    printf("Enter a first string: ");
    scanf("%s",str1);
    
    printf("Enter a second string: ");
    scanf("%s",str2);
    
    char str3[200];
    
    strcat(str1,str2);
    
    int length = strlen(str1);
    
    printf("\njoint string: %s",str1);
    printf("\nNumber of characters: %d",length);
}