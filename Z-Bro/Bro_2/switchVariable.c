#include <stdio.h>
#include <string.h>

int main()
{
    
    char x[20] = "waterbucket";
    char y[20] = "lemonade";
    char temp[strlen(x)];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}