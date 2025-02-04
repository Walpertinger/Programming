#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to check if all elements of the array are greater than 5
int checkGreaterThanFive(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 5) {
            return 0; // Return 0 if any element is <= 5
        }
    }
    return 1; // Return 1 if all elements are > 5
}

int main() {
    int size;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to check the condition
    if (checkGreaterThanFive(arr, size)) {
        printf("All elements are greater than 5.\n");
    } else {
        printf("Not all elements are greater than 5.\n");
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
