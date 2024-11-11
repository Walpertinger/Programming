#include <stdio.h>
#include <stdarg.h>

// Funktion, die eine variable Anzahl von float-Argumenten subtrahiert
float float_subtract(int count, ...) {
    va_list args;
    va_start(args, count);

    // Erstes Argument als Startwert für die Subtraktion verwenden
    float result = va_arg(args, double); // va_arg liest double für floats

    // Schleife durch die restlichen Argumente und subtrahiere sie vom Ergebnis
    for (int i = 1; i < count; i++) {
        result -= va_arg(args, double);
    }

    va_end(args);
    return result;
}

int main() {
    // Beispielaufruf der Funktion
    float result = float_subtract(); // entspricht 10.0 - 2.5 - 1.2 - 0.8
    printf("Das Ergebnis der Subtraktion ist: %.2f\n", result);
    return 0;
}
