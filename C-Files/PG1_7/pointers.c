#include <stdio.h>

int main()
{
    int var = 42;
    int *ptr = &var;
    *ptr = 41;
    printf("der Wert: %d\n", var);
    return 0;
}