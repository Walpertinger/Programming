#include <stdio.h>

int main(){

    double prices[5] = {30.0};
    
    prices[0] = 5.0;
    prices[1] = 15.0;
    prices[2] = 10.0;
    prices[3] = 25.0;
    prices[4] = 20.0;
    
    printf("$%.2lf", prices[1]);

    return 0;
}