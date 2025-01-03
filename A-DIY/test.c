#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *A;
    int elements = 0; // Number of detected elements
    char buffer[1024]; // Buffer to store the input line

    // Ask the user to input the integers
    printf("Enter the elements of A separated by spaces (e.g., 1 2 3 4 5):\n");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove the trailing newline character

        // First pass: Count the number of integers in the input
        char *token = strtok(buffer, " ");
        while (token != NULL)
        {
            elements++; // Count the number of tokens
            token = strtok(NULL, " ");
        }

        // Allocate memory for A based on the number of elements
        A = (int *)malloc(elements * sizeof(int));
        if (A == NULL)
        {
            printf("No empty space in storage!\n");
            return 1;
        }

        // Second pass: Parse and store the integers into A
        strcpy(buffer, strtok(buffer, "\0")); // Restore the original input
        token = strtok(buffer, " ");
        int i = 0;
        while (token != NULL)
        {
            A[i++] = atoi(token);
            token = strtok(NULL, " ");
        }

        // Test the elements in A
        printf("A:={");
        for (int i = 0; i < elements; i++)
        {
            printf("%d", A[i]);
            if (i < elements - 1)
            {
                printf(", ");
            }
        }
        printf("}\n");

        // Free the allocated memory
        free(A);
    }
    else
    {
        printf("Error reading input.\n");
    }

    return 0;
}
//this does not really work