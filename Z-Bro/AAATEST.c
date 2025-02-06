#include <stdio.h>
#include <string.h>

int main()
{
    int A[] = {1,2,3,4,5,6,7};
    int B[] = {1,3,4,5,23,4,2342};
    memcmp(A,B, sizeof(A));


    return 0;
}

