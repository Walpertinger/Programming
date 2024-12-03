#include <stdio.h>
#include <math.h>

int main() {
    
    double A = sqrt(9); //square root
    double B = pow(2, 4); //base to power of
    int C = round(3.14); //rounds
    int D = ceil(3.14); //rounds up
    int E = floor(3.99); //rounds down
    double F = fabs(-100); //turns any negative to positive
    double G = log(3); //logarithm
    double H = sin(45); //sin
    double I = cos(45); //cosin
    double J = tan(45); //tangen

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);

    return 0;
}