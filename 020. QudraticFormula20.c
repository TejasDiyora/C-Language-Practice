// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
// Test Data :
// Input the first number(a): 25
// Input the second number(b): 35
// Input the third number(c): 12
// Expected Output:
// Root1 = -0.60000
// Root2 = -0.80000

#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c;
    float Root1, Root2, Discriminant;
    
    printf("Enter a first number(a): ");
    scanf("%d",&a);
    
    printf("Enter a first number(b): ");
    scanf("%d",&b);
    
    printf("Enter a first number(c): ");
    scanf("%d",&c);
    
    Discriminant = pow(b,2) - (4 * a * c);
    
    Root1 = (-b + sqrt(Discriminant)) / (2 * a) ;
    Root2 = (-b - sqrt(Discriminant)) / (2 * a) ;
    
    printf("Root1 = %f",Root1);
    printf("\nRoot2 = %f",Root2);
    
}