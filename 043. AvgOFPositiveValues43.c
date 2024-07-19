// Write a C program to calculate the average mathematics marks of some students. Input 0 (excluding to calculate the average) or a negative value to terminate the input process.
// Test Data :
// Input Mathematics marks (0 to terminate): 10
// 15
// 20
// 25
// 0
// Expected Output:
// Average marks in Mathematics: 17.50

#include<stdio.h>

int main(){
    int marks[5],i;
    float avg,total=0,marks_total=0;
    
    for(i=1;i<6;i++){
        printf("Input Mathematics marks: ");
        scanf("%d",&marks[i]);
        
        if(marks[i] > 0){
            total+=1;
            marks_total+= marks[i];
        }
        else{
            continue;
        }
    }
    avg = marks_total / total;
    printf("Average marks in Mathematics: %f",avg);
}