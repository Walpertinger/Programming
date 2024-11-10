#include <stdio.h>

int main(){
    
    int i = 0;
    printf("\n\nPlease enter a number: \n");
    fflush(stdout);

    scanf("%d", &i);
    
    printf("Your number is: %d \n", i);
    
    return 0;
}