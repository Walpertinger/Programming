#include <stdio.h>

int main() {
    
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did ok!\n");
            break;
        case 'D':
            printf("You can do better!\n");
            break;
        case 'E':
            printf("At least its not an F!\n");
            break;
        case 'F':
            printf("You Failed!\n");
            break;
        default:
            printf("pleace enter only valid grades!\n");
    }

    return 0;
}