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
    int sternabstand = 0;
    
    printf("Welche Kantenlaenge willst du verwenden?: ");
    scanf("%d", &kantenlaenge);
    printf("\n");

    for(kantenlaenge; kantenlaenge > 0; kantenlaenge--, sternabstand+=2)
    {
        zeile(kantenlaenge, sternabstand);
    }


    for(sternabstand; 0 <= sternabstand; kantenlaenge++, sternabstand-=2)
    {
        zeile(kantenlaenge, sternabstand);
    }

    return 0;
}