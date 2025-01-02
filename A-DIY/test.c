#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int *A;
    int elements;
    int **R;
    int pairs;

    // Eingabe der Anzahl der Elemente in A
    printf("Enter the number of elements in A:\n");
    scanf("%d", &elements);
    getchar(); // Entfernt das '\n' nach scanf

    // Speicher für A reservieren
    A = (int *)malloc(elements * sizeof(int));
    if (A == NULL) {
        printf("No empty space in storage!\n");
        return 1;
    }

    // Eingabe der Elemente in A
    char buffer[1024];
    printf("Enter the elements of A separated by spaces (e.g., 1 2 3 4):\n");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0'; // Entferne das abschließende '\n'

        // Zerlege die Eingabe anhand von Leerzeichen
        char *token = strtok(buffer, " ");
        int i = 0;
        while (token != NULL && i < elements) {
            A[i] = atoi(token); // Konvertiere das Token zu Integer und speichere es in A
            token = strtok(NULL, " ");
            i++;
        }

        // Falls zu wenige Werte eingegeben wurden
        if (i < elements) {
            printf("Error: Not enough elements provided. Expected %d, but got %d.\n", elements, i);
            free(A); // Speicher freigeben
            return 1;
        }
    }

    // Testausgabe der Elemente von A
    printf("A:={");
    for (int i = 0; i < elements; i++) {
        printf("%d", A[i]);
        if (i < elements - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    // Speicher freigeben
    free(A);

    return 0;
}
