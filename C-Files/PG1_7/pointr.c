#include <stdio.h>

int main()
{
    int intVar = 0;
    int *pointerVar;

    pointerVar = &intVar; // Assign address of intVar to pointerVar

    printf("pointer value (points to intVar): %d\n", *pointerVar);
    printf("int value: %d\n", intVar);
    printf("pointer address: %p\n", (void*)pointerVar);  // Address stored in pointer
    printf("intVar address: %p\n", (void*)&intVar);      // Address of intVar
    printf("pointerVar address: %p\n", (void*)&pointerVar); // Address of pointer itself

    *pointerVar = 1337;

    printf("new pointer value (points to intVar): %d\n", *pointerVar);
    printf("new int value: %d\n", intVar);
    printf("new pointer address: %p\n", (void*)pointerVar);     // Address stored in pointer
    printf("new intVar address: %p\n", (void*)&intVar);         // Address of intVar
    printf("new pointerVar address: %p\n", (void*)&pointerVar); // Address of pointer itself

    return 0;
}
