#include <stdio.h>

long int factorial(long int n){
    static int i = 1;
    if(i == 1) printf("\nBerechnung der Fakultaet %ld: ", n);
    
    if(n){
        i++;
        n >1 ? printf("%ld * ", n) : printf("%ld * 1", n);
        return n * factorial(n-1);
    }
    printf("\n%d. und letzter Aufruf. ", i);
    return 1;
}

int main(){
    int n = 5; 

    printf("Die Fakultaet von %d ist: %ld",n,factorial(n));
    return 0;
}