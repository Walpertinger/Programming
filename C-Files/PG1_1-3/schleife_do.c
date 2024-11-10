#include <stdio.h>

int main(){

    int i;
    printf("how many times?: ");
    scanf("%d", &i);
    
    do{
        i--;
        printf("text\n");
    } while (i != 0);
    return 0;
}