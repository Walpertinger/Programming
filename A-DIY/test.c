#include <stdio.h>
#include <stdlib.h>

int main() {
    int *A = NULL;  // Dynamisches Array für A
    int n = 0;      // Anzahl der Elemente in A
    int capacity = 10; // Anfangskapazität des Arrays (wenn der Benutzer viele Elemente eingibt)
    
    A = (int *)malloc(capacity * sizeof(int)); // Speicher für das Array reservieren
    
    if (A == NULL) {
        printf("Speicherreservierung fehlgeschlagen!\n");
        return 1;  // Fehlercode 1 für Speicherfehler
    }

    printf("Gib die Elemente der Menge A ein, getrennt durch Leerzeichen (beende die Eingabe mit Enter):\n");

    // Benutzereingabe lesen, bis ein Zeilenumbruch erreicht wird
    while (scanf("%d", &A[n]) == 1) {
        n++;
        
        // Wenn die Kapazität des Arrays erreicht ist, vergrößern wir es dynamisch
        if (n == capacity) {
            capacity *= 2; // Kapazität verdoppeln
            A = (int *)realloc(A, capacity * sizeof(int)); // Neuen Speicherplatz anfordern

            if (A == NULL) {
                printf("Speicherreservierung fehlgeschlagen!\n");
                return 1;  // Fehlercode 1 für Speicherfehler
            }
        }
    }

    // Ausgabe der Elemente von A
    printf("Die Menge A enthält die Elemente:\n{ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("}\n");

    // Speicher freigeben
    free(A);

    return 0;
}

