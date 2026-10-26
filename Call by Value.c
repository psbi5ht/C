#include <stdio.h>

// This function receives a duplicate copy of the number
void modifyValue(int num) {
    num = num * 2; // Double the copied value
    printf("Inside the function (copied value doubled): %d\n", num);
}

int main() {
    int userNum;

    printf("=== CALL BY VALUE PROGRAM ===\n\n");

    // 1. Get input from the user
    printf("Enter a number: ");
    scanf("%d", &userNum);

    printf("Before function call (original value): %d\n\n", userNum);

    // 2. Pass the variable to the function
    modifyValue(userNum); 

    // 3. Verify that the original value did not change
    printf("\nAfter function call (original value): %d\n", userNum);

    return 0;
}

