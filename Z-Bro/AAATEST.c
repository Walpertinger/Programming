#include <stdio.h>
#include <string.h>

int main() {
    char name[25] = "Julian Ehrmaier";

    // Überprüfen, ob der String länger als 1 Zeichen ist
    if (strlen(name) > 1) {
        // Verschiebe das letzte Zeichen an die Position des vorletzten Zeichens
        for (int i = strlen(name) - 1; i > strlen(name) - 2; i--) {
            name[i - 1] = name[i];
        }

        // Nullterminiere den String nach der Verschiebung
        name[strlen(name) - 1] = '\0';
    }

    printf("Neuer String: %s\n", name);

    return 0;
}
