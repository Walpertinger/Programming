#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Pair;

int main()
{
    //test für Relation unterscheidung in zugehörigen Gruppen
    //Benötigt sind die Menge A und die Menge der Relation selbst

    int *A = NULL;
    int size_A = 0;
    int n;

    printf("Enter the elements for A:={x, x, x} an: \n");
    scanf("%d", &n);

    A = (int *)malloc(n * sizeof(int));

    if (A == NULL) 
    {
        printf("saving disc space failed!\n");
        return 1;
    }

    free(A);

    return 0;
}