#include <stdio.h>

int main() {
    int terms;
    int t1 = 0, t2 = 1;
    int nextTerm;
    int i; // Declared here to fix Dev-C++ compilation errors

    // 1. Take input from the user
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    // 2. Validate input
    if (terms <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } 
    // 3. Generate and print the series
    else {
        printf("Fibonacci Series up to %d terms: ", terms);

        for (i = 1; i <= terms; ++i) {
            printf("%d ", t1);
            
            // Calculate the next number in the sequence
            nextTerm = t1 + t2;
            t1 = t2;       // Shift t2 to t1
            t2 = nextTerm; // Shift nextTerm to t2
        }
        printf("\n");
    }

    return 0;
}

