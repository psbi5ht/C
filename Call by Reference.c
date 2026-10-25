#include <stdio.h>

// This function receives the memory address of the variable via a pointer
void modifyValue(int *numPtr) {
    *numPtr = *numPtr * 2; // Dereferencing to double the original value
    printf("Inside the function (value modified at memory address): %d\n", *numPtr);
}

int main() {
    int userNum;

    printf("=== CALL BY REFERENCE PROGRAM ===\n\n");

    // 1. Get input from the user
    printf("Enter a number: ");
    scanf("%d", &userNum);

    printf("Before function call (original value): %d\n\n", userNum);

    // 2. Pass the memory address of the variable using '&'
    modifyValue(&userNum); 

    // 3. Verify that the original value has changed
    printf("\nAfter function call (original value): %d\n", userNum);

    return 0;
}

