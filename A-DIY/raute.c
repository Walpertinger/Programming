#include <stdio.h>

void zeile(int leer1, int leer2)
{
    while(leer1 > 0)
    {
        printf(" ");
        leer1--;
    }

    printf("*");
    
    while(leer2 > 0)
    {
        printf(" ");
        leer2--;
    }

    printf("*\n");
}

int main()
{
    int kantenlaenge = 0;
    
    printf("Welche Kantenlaenge willst du verwenden?: ");
    scanf("%d", &kantenlaenge);

    for(kantenlaenge; kantenlaenge > 0; kantenlaenge--)
    {
        zeile(kantenlaenge, kantenlaenge);
    }

    return 0;
}