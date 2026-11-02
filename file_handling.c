#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char text[100];
    int lines, i;

    // --- PHASE 1: WRITING USER INPUT TO A FILE ---
    
    // Open file in "w" (write) mode
    fptr = fopen("user_data.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not create file!\n");
        exit(1);
    }

    printf("How many lines of text do you want to write? ");
    scanf("%d", &lines);
    
    // Consume the leftover newline character from the buffer after scanf
    getchar(); 

    printf("\nEnter your %d lines of text:\n", lines);
    for (i = 0; i < lines; i++) {
        printf("Line %d: ", i + 1);
        
        // Read a full line of input including spaces from the user
        fgets(text, sizeof(text), stdin); 
        
        // Write the string into the file
        fprintf(fptr, "%s", text);
    }

    // Close the file stream to save updates
    fclose(fptr);
    printf("\n--- Data successfully saved to 'user_data.txt' ---\n\n");


    // --- PHASE 2: READING THE DATA BACK ---
    
    // Reopen the file in "r" (read) mode
    fptr = fopen("user_data.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open file for reading!\n");
        exit(1);
    }

    printf("Reading your saved data back from 'user_data.txt':\n");
    printf("--------------------------------------------------\n");
    
    // Read the file line by line until reaching the End-Of-File (EOF)
    while (fgets(text, sizeof(text), fptr) != NULL) {
        printf("%s", text);
    }
    printf("--------------------------------------------------\n");

    // Close the file stream
    fclose(fptr);

    return 0;
}

