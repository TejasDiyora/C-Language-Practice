//Write a C program to compute the perimeter and area of a circle with a given radius

#include<stdio.h>

void main(){
    float radius, area, perimeter;
    
    printf("Enter a radius of circle: ");
    scanf("%f",&radius);
    
    perimeter = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    
    printf("Perimeter of a circle is %f unit",perimeter);
    printf("\nArea of a circle is %f unit",area);
    
}