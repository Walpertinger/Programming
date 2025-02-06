#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    printf("array 1:%p \n array 5: %p \n", &array[0], &array[4]);
    printf("array 1:%d \n array 5: %d \n", array[0], array[4]);
    return 0;
}