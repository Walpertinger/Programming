#include <stdio.h>

int main()
{
    double prices[4];

    prices[0] = 5.0;
    prices[1] = 15.0;
    prices[2] = 25.0;
    prices[3] = 35.0;
    prices[4] = 45.0;

    printf("$%.2lf", prices[2]);

    return 0;
}