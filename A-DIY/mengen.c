#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Pair;

int main()
{
    //Test für Relation Unterscheidung in zugehörigen Gruppen
    //Benötigt sind die Menge A und die Menge der Relation selbst

    int *A;
    int elements;

    int **R;
    int pairs;

    //Vorerst muss durch angabe der Elemente A bestimmt werden 
    printf("Enter the number of elements in A:\n");
    scanf("%d", &elements);

    A = (int *)malloc(elements * sizeof(int));

    if (A == NULL)
    {
        printf("no empty space in storage!\n");
        return 1;
    }

    //Eingabe der Elemente eins nach dem anderen
    printf("Enter the elements of A one at a time: \n");
    for (int i = 0; i < elements; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    //Test der Elemente in A
    printf("A:={");
    for (int i = 0; i < elements; i++)
    {
        printf("%d", A[i]);
        if (i < elements - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");

    //Vorerst muss die Anzahl der Paare gegeben werden
    printf("give the number of pairs in relation: \n");
    scanf("%d", &pairs);

    R = (int **)malloc(pairs * sizeof(int *));
    
    if (R == NULL)
    {
        printf("no empty space in storage!\n");
        return 1;
    }

    for (int i = 0; i < pairs; i++)
    {
        R[i] = (int *)malloc(2 * sizeof(int));
        if (R[i] == NULL)
        {
            printf("no empty space in storage!\n");
            return 1;
        }
    }

    printf("give the pairs of relation (i.e. x y):\n");
    for (int i = 0; i < pairs; i++)
    {
        printf("Pair %d: ", i + 1);
        scanf("%d %d", &R[i][0], &R[i][1]);
    }

    printf("Die Relation R ist:\n{ ");
    for (int i = 0; i < pairs; i++)
    {
        printf("(%d, %d)", R[i][0], R[i][1]);
        if (i < pairs - 1)
        {
            printf(", ");
        }
    }
    printf(" }\n");

    for (int i = 0; i < pairs; i++)
    {
        free(R[i]);
    }
    
    free(R);
    free(A);

    return 0;
}