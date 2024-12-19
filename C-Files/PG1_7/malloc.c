#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    float *ptr;
    float arr[5] = {1,2,3,4,5};

    ptr = (float *)malloc(5 * sizeof(float));

    if(ptr)
    {
        for (int i = 0; i < SIZE; i++)
        {
            *(ptr + i) = arr[i];
        }
    }
    else
    {
        printf("Kein virtueller RAM verfügbar\n");
        return 1;
    }    
    return 0;
}