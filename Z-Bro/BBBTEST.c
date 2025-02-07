#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[] = {1.1,1.2,1.3,1.4,1.5};
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    
    printf("test: %zu",(sizeof(arr)/sizeof(float)));

    if(ptr)
    {
        for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
        {
            *(ptr+i) = arr[i];
        }        
    }
    else
    {
        printf("Kein virtueller RAM verfügbar\n");
        return 1;
    }
    free(ptr); 
    return 0;
}