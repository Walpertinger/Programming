/*
CHATGPT CODE!!!
*/

#include <stdio.h>
#include <stdlib.h>

// Funktion zum Hinzufügen von zwei Matrizen
void add_matrices(int **matrix1, int **matrix2, int **result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Funktion zum Multiplizieren von zwei Matrizen
void multiply_matrices(int **matrix1, int **matrix2, int **result, int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int x, y;
    
    // Matrizen-Größe eingeben
    printf("Wie viele Reihen (Zeilen)?: \n");
    scanf("%d", &x);
    printf("Wie viele Spalten?: \n");
    scanf("%d", &y);

    // Dynamische Zuweisung für die Matrizen
    int **matrix1 = (int **)malloc(x * sizeof(int *));
    int **matrix2 = (int **)malloc(x * sizeof(int *));
    int **result = (int **)malloc(x * sizeof(int *));
    
    for (int i = 0; i < x; i++) {
        matrix1[i] = (int *)malloc(y * sizeof(int));
        matrix2[i] = (int *)malloc(y * sizeof(int));
        result[i] = (int *)malloc(y * sizeof(int));
    }

    // Matrizenwerte eingeben
    printf("Gib die Werte für Matrix 1 ein:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Gib die Werte für Matrix 2 ein:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrizenaddition
    add_matrices(matrix1, matrix2, result, x, y);
    printf("Ergebnis der Matrizenaddition:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Speicher freigeben
    for (int i = 0; i < x; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
