//  Write a C program to display the sizes and ranges for each of C's data types.
// Sample Output:
// Size of C data types:

// Type               Bytes

// --------------------------------
// char                 1
// int8_t               1
// unsigned char        1
// uint8_t              1
// short                2
// int16_t              2
// uint16t              2
// int                  4
// unsigned             4
// long                 8
// unsigned long        8
// int32_t              4
// uint32_t             4
// long long            8
// int64_t              8
// unsigned long long   8
// uint64_t             8
// float                4
// double               8
// long double          16
// _Bool                1

#include<stdio.h>
#include<stdint.h>

int main(){
    printf("%-20s %-20s","Type","Bytes");
    printf("\n--------------------------");
    
    printf("\n%-20s %-20lu","char",sizeof(char));
    printf("\n%-20s %-20lu","int8_t",sizeof(int8_t));
    printf("\n%-20s %-20lu","unsigned char",sizeof(unsigned char));
    printf("\n%-20s %-20lu","uint8_t",sizeof(uint8_t));
    printf("\n%-20s %-20lu","short",sizeof(short));
    printf("\n%-20s %-20lu","int16_t",sizeof(int16_t));
    printf("\n%-20s %-20lu","int",sizeof(int));
    printf("\n%-20s %-20lu","unsigned",sizeof(unsigned));
    printf("\n%-20s %-20lu","long",sizeof(long));
    printf("\n%-20s %-20lu","unsigned long",sizeof(unsigned long));
    printf("\n%-20s %-20lu","int32_t",sizeof(int32_t));
    printf("\n%-20s %-20lu","uint32_t",sizeof(uint32_t));
    printf("\n%-20s %-20lu","long long",sizeof(long long));
    printf("\n%-20s %-20lu","int64_t",sizeof(int64_t));
    printf("\n%-20s %-20lu","unsigned long long",sizeof(unsigned long long));
    printf("\n%-20s %-20lu","uint64_t",sizeof(uint64_t));
    printf("\n%-20s %-20lu","float",sizeof(float));
    printf("\n%-20s %-20lu","double",sizeof(double));
    printf("\n%-20s %-20lu","long double",sizeof(long double));
    printf("\n%-20s %-20lu","_bool",sizeof(_Bool));
    
}