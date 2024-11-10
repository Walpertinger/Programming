#include <stdio.h>

float return_a_float(){
    float a = 0.0;
    printf("\nEnter a float value: ");
    scanf("%f", &a);
    return a;
}

int double_num(){
    int a, b;
    printf("\nGive two numbers for multiplication: ");
    scanf("%d %d", &a, &b);
    return a * b;
}

int main(){
    float g = 0.0;
    int z = 0;

    g = return_a_float();
    z = double_num();
    
    printf("\nThe value you entered is: %.2f\n", g);
    printf("\nThe multiplication is: %d\n", z);
    
    return 0;
}