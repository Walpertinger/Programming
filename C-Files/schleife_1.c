#include <stdio.h>

int main(){
    int zahl = 1, summe = 0;
    while(zahl <= 10){
        summe += zahl;
        printf("%d. Durchlauf\n", zahl++);
    }
    printf("Die Summe ist: %d\n", summe);
    return 0;
}