#include <stdio.h>

void substraction(int a,int b,int *c)
{
    *c = a - b;
}

int main()
{
    int a = 5;
    int b = 16;
    int subs;

    substraction(b, a, &subs);
    printf("%d", subs);

    return 0;
}