//Write a C program to compute the perimeter and area of a rectangle.

#include<stdio.h>

void main(){
    int length, width, area, perimeter;
    
    printf("Enter a length and width of rectangle: ");
    scanf("%d %d",&length, &width);
    
    perimeter = 2 * (length + width);
    area = length * width;
    
    printf("Area is %d",area);
    printf("\nPerimeter is %d",perimeter);
}