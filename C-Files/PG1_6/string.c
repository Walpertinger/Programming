#include <stdio.h>

int main()
{
    int beispiel[] = {10,20,30,40,50};
    /*for(int j = 0; j < sizeof(beispiel) - 1; j++)
    {
        printf("%d: %d mit Adresse: %p \n", (j+1), beispiel[j], &beispiel[j]);
    }
    */
    printf("size of beispiel: %zu\n", (sizeof(beispiel)/sizeof(beispiel[1])));

    char wort[] = "Hallo";
    printf("string is: %zu\n", (sizeof(wort)/sizeof(wort[0])));
    

    for (int i = 0;i < sizeof(wort); i++)
    {
        if(wort[i] == '\0')
        {
            printf("\\0\n");
        }else{
            printf("%c \n", wort[i]);
        }
    }

    char *word = wort;

    for (int i = 0;i < sizeof(wort); i++)
    {
        printf("%p \n", &word[i]);
    }

    return 0;
}