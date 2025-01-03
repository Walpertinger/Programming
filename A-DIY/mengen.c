#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    //Test für Relation Unterscheidung in zugehörigen Gruppen   
    //Benötigt sind die Menge A und die Menge der Relation selbst
/*
int A_fgets()
{
    char buffer[1024];
    printf("Enter the elements of A separated by space (e.g., 1 2 3 4):\n");
    
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0'; // Entferne das abschließende '\n'

        // Zerlege die Eingabe in Tokens
        char *token = strtok(buffer, " ");
        int i = 0;
        while (token != NULL && i < elements)
        {
            A[i] = atoi(token);
            token = strtok(NULL, " ");
            i++;
        }
        if (i < elements) {
        printf("Error: Not enough elements provided. Expected %d, but got %d.\n", elements, i);
        free(A); // Speicher freigeben
        return 1;
    }
}
*/

int main()
{
    int *A;
    int elements;
    int **R;
    int pairs;
 
    printf("Enter the number of elements in A:\n");
    scanf("%d", &elements);
    getchar();

    A = (int *)malloc(elements * sizeof(int));
    if (A == NULL)
    {
        printf("no empty space in storage!\n");
        return 1;
    }

    printf("Enter the elements of A (e.g., 1 2 3 4):\n");
        for (int i = 0; i < elements; i++)
        {
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

    printf("give the pairs of relation with only spaces in between! (i.e. x y):\n");
    for (int i = 0; i < pairs; i++)
    {
        printf("Pair(s): ");
        scanf("%d %d", &R[i][0], &R[i][1]);
    }

    printf("\nDie Relation R ist:\n{ ");
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