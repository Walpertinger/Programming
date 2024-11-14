#include <stdio.h>

void testStatic() {
    static int count = 0;
    count= count +4;
    printf("Count ist jetzt: %d\n", count);
}

int main() {
    testStatic(); // Ausgabe: Count ist jetzt: 1
    testStatic(); // Ausgabe: Count ist jetzt: 2
    testStatic(); // Ausgabe: Count ist jetzt: 3
    testStatic();
    testStatic();
    return 0;
}
