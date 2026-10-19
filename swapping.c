#include <stdio.h>

int main() {
    double first, second, temp;

    // Get user input
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    // Swap using a temporary variable
    temp = first;
    first = second;
    second = temp;

    // Display the swapped results
    printf("\nAfter swapping:\n");
    printf("First number = %.2lf\n", first);
    printf("Second number = %.2lf\n", second);

    return 0;
}

