// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).

#include<stdio.h>

void main(){
    int Total_distance;
    float Spent_fuel, Avg_cosumption;
    
    printf("Enter total distance travelled in kilometers: ");
    scanf("%d",&Total_distance);
    
    printf("Enter spent fuel in litters (Up to 2 decimals): ");
    scanf("%f",&Spent_fuel);
    
    Avg_cosumption = Total_distance / Spent_fuel;
    
    printf("Average cosumption of bike is %2f", Avg_cosumption);
}
