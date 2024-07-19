// Write a C program to create enumerated data types for 7 days and display their values in integer constants.
// Sun = 0
// Mon = 1
// Tue = 2
// Wed = 3
// Thu = 4
// Fri = 5
// Sat = 6

#include<stdio.h>
int main(){    
    enum week {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
    
    printf("\nSun = %d", sunday);
    printf("\nMon = %d", monday);
    printf("\nTue = %d", tuesday);
    printf("\nWed = %d", wednesday);
    printf("\nThu = %d", thursday);
    printf("\nFri = %d", friday);
    printf("\nSat = %d", saturday);
}    