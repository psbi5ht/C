#include <stdio.h>

int main() {
    int n, r;
    int permutation = 1; 
    int i; // Declared here to fix the Dev-C++ compilation error

    // 1. Take inputs from the user
    printf("Enter total number of objects (n): ");
    scanf("%d", &n);
    
    printf("Enter number of objects to arrange (r): ");
    scanf("%d", &r);

    // 2. Validate input constraints
    if (n < 0 || r < 0) {
        printf("Error: Input values cannot be negative.\n");
    } 
    else if (n < r) {
        printf("Error: Total objects (n) must be greater than or equal to arrangements (r).\n");
    } 
    // 3. Compute permutation directly
    else {
        // Multiplies numbers down from n exactly r times
        for (i = 0; i < r; i++) {
            permutation *= (n - i);
        }
        
        // Print the result using standard %d
        printf("Permutation P(%d, %d) = %d\n", n, r, permutation);
    }

    return 0;
}

  
