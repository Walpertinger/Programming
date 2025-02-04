#include <stdio.h>

int biggestNumber(int a, int b)
{
    if(a >= b)
    {
        return a;
    }
    else
    return b;
}

int main()
{
    int x = 5;
    int y = 8;

    printf("Test0 \n");

    int result = biggestNumber(x, y);
    printf("%d \n", result);
    return 0;
}