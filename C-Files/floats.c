#include <stdio.h>

int main(){
    float i = 0.0;

    printf("Bitte einen Wert eingeben: ");
    scanf("%f",&i);

    printf("Answer: %.2f\n", i); //kein "," eingeben sonder "."!
    return 0;
}