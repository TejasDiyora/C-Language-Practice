// Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for correct password print, "Correct password" and quit the program. The correct password is 1234.
// Test Data :
// Input the password: 1234
// Expected Output:
// Correct password

#include <stdio.h>
#include <string.h>

int main() {
    char Password[100];
    int i;

    for (i = 0; ; i++) {  
        printf("Enter a Password: ");
        scanf("%s", Password);

        if (strcmp(Password, "1234") == 0) {  
            printf("Correct password\n");
            break;  
        } else {
            printf("Incorrect password.\n");
        }
    }
}