#include <stdio.h>

int main() {
    int number;         // A regular integer variable
    int *ptr = &number; // A pointer initialized to point to the 'number' variable

    // 1. Take input from the user
    printf("Enter an integer: ");
    scanf("%d", ptr); // We pass 'ptr' directly because it already holds the address

    // 2. Display the value and address using the pointer
    printf("\n--- Reading Data ---\n");
    printf("Value stored in 'number': %d\n", number);
    printf("Value accessed via pointer (*ptr): %d\n", *ptr);
    printf("Memory address of 'number': %p\n", (void*)&number);
    printf("Address stored in 'ptr': %p\n", (void*)ptr);

    // 3. Modify the value using the pointer (Dereferencing)
    *ptr = *ptr + 10; 

    printf("\n--- After Adding 10 via Pointer ---\n");
    printf("New value of 'number': %d\n", number);

    return 0;
}

