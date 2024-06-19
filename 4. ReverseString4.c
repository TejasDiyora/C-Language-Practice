// Write a program to get a string from the user and print it reverse.

#include<stdio.h>
#include<string.h>
void main() {
    char word[100];
    int i,l;
    
    printf("Enter a word: ");
    scanf("%s",word);
    l = strlen(word);
    for(i=l;i>=0;i--){
    
        printf("%c",word[i]);
    }
}
