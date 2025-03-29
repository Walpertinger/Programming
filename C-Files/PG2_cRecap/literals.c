#include <stdio.h>

int main()
{
    unsigned long long zahl = 0x120112ull; // Oktal 022 = Dezimal 18
    printf("Number is: %llu\n", zahl);

    // Bitweise Ausgabe (64 Bit)
    printf("Bits: ");
    for (int i = sizeof(zahl) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (zahl >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");

    return 0;
}
