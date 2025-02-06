#include <stdio.h>
int main()
{
    int intArray[] = {100, 111, 103, 0};
    int *pointer = intArray;

    for (int i = 0; i < 4; i++)
    {
    printf("Der Wert an Adresse %p, auf die der Pointer zeigt: %d\n", &pointer[i], pointer[i]);
    printf("Der Wert an Adresse %p, auf die der Pointer zeigt: %d\n", pointer+i, *(pointer+i));
    printf("\n");
    }

    int Apfel;
    Apfel = 5;
    printf("%d", Apfel);

    return 0;
}