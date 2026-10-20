#include <stdio.h>

int main() {
    int num;
    int factorial = 1; 
    int i; // Declared outside the loop for older C standards

    printf("Enter a positive integer: ");
    // Make sure your compiler terminal allows inputs
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i; 
        }
        printf("Factorial of %d = %d\n", num, factorial); 
    }

    return 0;
}


