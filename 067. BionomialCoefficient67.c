// Write a C program to print a binomial coefficient table.
// Mx 0 1 2 3 4 5 6 7 8 9 10
// ----------------------------------------------------------
// 0 1
// 1 1 1
// 2 1 2 1
// 3 1 3 3 1
// 4 1 4 6 4 1
// 5 1 5 10 10 5 1
// 6 1 6 15 20 15 6 1
// 7 1 7 21 35 35 21 7 1
// 8 1 8 28 56 70 56 28 8 1
// 9 1 9 36 84 126 126 84 36 9 1
// 10 1 10 45 120 210 252 210 120 45 10 1

#include <stdio.h>

int factorial(int no) {
    int answer = 1;
    for (int i = no; i >= 1; i--) {
        answer *= i;
    }
    return answer;
}

int ncr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
    for (int n = 0; n <= 10; n++) {
        printf("%d ", n);
        for (int r = 0; r <= n; r++) {
            printf("%d ", ncr(n, r));
        }
        printf("\n");
    }

    return 0;

}