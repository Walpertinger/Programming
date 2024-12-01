#include <stdio.h>

int main(){

    double p = 1;
    printf("Nachkommastellen: %lf\n", p);
    printf("Nachkommastellen: %1.10lf\n", p);
    printf("Nachkommastellen: %20.15lf\n", p);

    return 0;
}