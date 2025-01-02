#include <stdio.h>
#include <stdlib.h>

int main() {
    int **R;    // Zeiger auf ein 2D-Array
    int pairs;  // Anzahl der Paare

    // Anzahl der Paare abfragen
    printf("Geben Sie die Anzahl der Paare in der Relation R ein: ");
    scanf("%d", &pairs);

    // Speicher für das 2D-Array reservieren (für 'pairs' Zeilen)
    R = (int **)malloc(pairs * sizeof(int *));
    if (R == NULL) {
        printf("Speicher konnte nicht reserviert werden.\n");
        return 1;
    }

    // Speicher für jede Zeile reservieren (jeweils 2 Werte: x und y)
    for (int i = 0; i < pairs; i++) {
        R[i] = (int *)malloc(2 * sizeof(int));
        if (R[i] == NULL) {
            printf("Speicher konnte nicht reserviert werden.\n");
            return 1;
        }
    }

    // Paare einlesen
    printf("Geben Sie die Paare der Relation R ein (z.B. x y):\n");
    for (int i = 0; i < pairs; i++) {
        printf("Paar %d: ", i + 1);
        scanf("%d %d", &R[i][0], &R[i][1]);  // x -> R[i][0], y -> R[i][1]
    }

    // Ausgabe der Paare
    printf("Die Relation R ist:\n{ ");
    for (int i = 0; i < pairs; i++) {
        printf("(%d, %d)", R[i][0], R[i][1]);
        if (i < pairs - 1) {
            printf(", ");
        }
    }
    printf(" }\n");

    // Speicher freigeben
    for (int i = 0; i < pairs; i++) {
        free(R[i]);
    }
    free(R);

    return 0;
}
