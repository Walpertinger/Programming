#include <stdio.h>
#include <string.h>

int main()
{
    int A[] = {1,2,3,4,5,6,18};
    int B[] = {12,2,3,4,5,6,7};


    if (memcmp(A,B, sizeof(A)) == 0)
    {
        printf("0");
    }else if (memcmp(A,B, sizeof(A)) > 0)
    {
        printf("+");
    }else
    {
        printf("-");
    }
    return 0;
}

