#include <stdio.h>

int main()
{
    struct typeName{
        int p;
        char b;
        float c;
    };

    struct typeName alpha;
    alpha.p = 17;
    alpha.b = "b";
    alpha.c = 5.4;
    return 0;
}