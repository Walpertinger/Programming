#include <stdio.h>

// Funktion foo, die die Adresse einer Variablen ändert
int foo(int *x) {
    // Dereferenzieren des Zeigers, um den Wert der Variablen zu ändern
    *x = 42;  // Wert an der Adresse, auf die ptr zeigt, wird geändert
}

int main() {
    int x = 10;
    printf("Vor dem Aufruf von foo: x = %d\n", x);

    // Adresse von x wird an foo übergeben
    foo(&x);  // &x übergibt die Adresse von x an foo

    printf("Nach dem Aufruf von foo: x = %d\n", x);

    return 0;
}
