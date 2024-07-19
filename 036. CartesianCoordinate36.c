// These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
// Test Data :
// Input the Coordinate(x,y):
// x: 25
// y: 15
// Expected Output:
// Quadrant-I(+,+)

#include<stdio.h>

int main(){
    int x, y;
    
    printf("Enter a first coordinates: ");
    scanf("%d",&x);
    
    printf("Enter a second coordinates: ");
    scanf("%d",&y);
    
    if(x > 0){
        if(y > 0){
            printf("Quadrant-I(+,+)");
        }
        else if (y < 0){
            printf("Quadrant-IV(+,-)");
        }
        else{
            printf("x axis");
        }
    }
    else if(x < 0){
        if(y > 0){
            printf("Quadrant-II(-,+)");
        }
        else if(y < 0){
            printf("Quadrant-III(-,-)");
        }
        else{
            printf("x axis");
        }
    }
    else{
        if(y == 0){
            printf("Origin");
        }
        else{
            printf("y axis");
        }
    }
}