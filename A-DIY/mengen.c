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

int reflexive(int *A, int elements, int **R, int pairs)
{
    for (int i = 0; i < elements; i++) {
        int isReflexive = 0;

        for (int j = 0; j < pairs; j++) {
            if (R[j][0] == A[i] && R[j][1] == A[i]) {
                isReflexive = 1;
                break;
            }
        }
        if (!isReflexive) {
            return 0; //relation is not reflexive
        }
    }
    return 1; //relation is reflexive
}

int symmetrical(int *A, int elements, int **R, int pairs)
{
    for(int i = 0; i )
}


int main()
{
    //deklaration
    int *A;
    int elements;
    int **R;
    int pairs;
 

    //enter elements of A
    printf("Enter the number of elements in A:\n");
    scanf("%d", &elements);

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


    //enter paired elements of xRy
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
        scanf("%d %d", &R[i][0], &R[i][1]);
    }


    
    if (reflexive(A, elements, R, pairs)) 
        {
            printf("\nit is reflexive\n");
        } else {
            printf("\nit is not reflexive\n");
        }

    if(symmetrical(A, elements, R, pairs))
        {
            printf("\nit is symmetrical\n");
        } else {
            printf("\nit is not symmetrical\n");
        }

    //test to give out A and R
    printf("\n\nthe set A is:\n{");
    for (int i = 0; i < elements; i++)
    {
        printf("%d", A[i]);
        if (i < elements - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");

    printf("\nthe relation R is:\n{");
    for (int i = 0; i < pairs; i++)
    {
        printf("(%d, %d)", R[i][0], R[i][1]);
        if (i < pairs - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");



    //A and R set free for no memory leak
    for (int i = 0; i < pairs; i++) //R[i] needs to be set free too
    {
        free(R[i]);
    }
    free(R);
    free(A);

    return 0;
}