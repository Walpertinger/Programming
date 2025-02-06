#include <stdio.h>

int main()
{
    char wort[] = "Hallo";
    //printf("string is: %zu\n", sizeof(wort));

    for (int i = 0;i < sizeof(wort); i++)
    {
        if(wort[i] == '\0')
        {
            printf("\\0\n");
        }else{
            printf("%c \n", wort[i]);
        }
    }
    return 0;
}