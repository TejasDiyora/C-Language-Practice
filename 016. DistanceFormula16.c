// Write a C program to calculate the distance between two points.
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803

#include<stdio.h>
#include<math.h>

void main(){
    int x1,y1,x2,y2;
    float Distance;
    
    printf("Enter a first coordinate(x1,y1): ");
    scanf("%d %d",&x1, &y1);
    
    printf("Enter a first coordinate(x2,y2): ");
    scanf("%d %d",&x2, &y2);
    
    Distance = sqrt(pow(x2-x1,2) + pow(y2-y1, 2));
    
    printf("%f",Distance);
    
}