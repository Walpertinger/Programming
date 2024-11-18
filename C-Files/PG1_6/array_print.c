#include <stdio.h>

int main() {
    int arr[5] = {6, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]); // Größe des Arrays berechnen

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Elemente des Arrays ausgeben
    }
    printf("\n");

    return 0;
}
