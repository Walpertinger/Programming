#include <stdio.h>

void foo() {
    int a = 5;  // a liegt im Stack
    printf("Adresse von a: %p\n", (void*)&a);
}

int main() {
    foo();
    return 0;
}
