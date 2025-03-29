#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 10)
    {
        i++;
        printf("c");
        if(i == 3)
        {
            break;
        }
    }

    while(i < 5)
    {
        i++;
        printf("yes");
    }
    return 0;
}