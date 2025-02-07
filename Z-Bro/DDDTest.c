#include <stdio.h>
#include <stdlib.h>

int x = 42;

int main()
{
    int number = 13;
    int *pointer;
    pointer = &number;

    printf("number hat den Wert: %i\n", number);
    *pointer = 12;
    printf("number hat die Adresse: %p\n", pointer);
    printf("pointer hat die Adresse: %p\n", &pointer);
    printf("Adresse x: %p\n", (void*)&x);

    char array[] = {"Hallo die Frau\n"};
    char *ptr = (char*)malloc((sizeof(array)/sizeof(char))*(sizeof(char)));

    if(ptr == NULL)
    {
        printf("Kein Virtueller RAM verfügbar.\n");
        return 1;
    } 
    else
    {
        for (int i=0; i < sizeof(array)/sizeof(char); i++)
        {
            ptr[i] = array[i];
        }
    }
    printf("Kopierter String: %s\n", ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}