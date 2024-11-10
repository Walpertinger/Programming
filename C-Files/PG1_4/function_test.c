#include <stdio.h>

//Addiert 3 Zahlen
int num_sum(int a, int b, int c){
    
    printf("\nPlease enter 3 integers for summation: \n");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;

    printf("\n%d, %d and %d all together makes: %d\n", a, b, c, sum);
    return 0;
}

//Subtrahiert 3 Zahlen
int num_sub(int a, int b, int c){

    printf("\nPlease enter 3 integers for subtraction: \n");
    scanf("%d %d %d", &a, &b, &c);

    int sub = a - b - c;

    printf("\n%d minus %d and %d makes: %d\n", a, b, c, sub);
    return 0;
}

//Multipliziert 2 Zahlen
int num_multip(int a, int b){

    printf("\nPlease enter 2 integers for multiplication: \n");
    scanf("%d %d", &a, &b);

    int multip = a * b;

    printf("\n%d and %d multiplied makes: %d\n", a, b, multip);
    return 0;
}

//Dividiert eine durch eine andere Zahl
int num_div(int a, int b){

    if (b==0) {
        printf("\nno division with zero allowed!");
    }

    printf("\nPlease enter integer divident and devisor: \n");
    scanf("%d %d", &a, &b);

    int quotient = a / b;
     
    printf("\n%d devided by %d makes: %d\n", a, b, quotient);
    return 0;
}


int main(){
    return 0;
}