#include <stdio.h>

//Addiert 3 Zahlen
int num_sum(int a, int b, int c){
    
    printf("\nPlease enter 3 integers for summation: \n");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;

    printf("-----------------------------------------------------");
    printf("\n%d, %d and %d all together makes: %d\n", a, b, c, sum);
    return 0;
}

//Subtrahiert 3 Zahlen
int num_sub(int a, int b, int c){

    printf("\nPlease enter 3 integers for subtraction: \n");
    scanf("%d %d %d", &a, &b, &c);

    int sub = a - b - c;

    printf("-----------------------------------------------------");
    printf("\n%d minus %d and %d makes: %d\n", a, b, c, sub);
    return 0;
}

//Multipliziert 2 Zahlen
int num_multip(int a, int b){

    printf("\nPlease enter 2 integers for multiplication: \n");
    scanf("%d %d", &a, &b);

    int multip = a * b;

    printf("-----------------------------------------------------");
    printf("\n%d and %d multiplied makes: %d\n", a, b, multip);
    return 0;
}

//Dividiert eine durch eine andere Zahl
int num_div(){
    float a, b;
    
    printf("\nPlease enter integer divident and devisor: \n");
    scanf("%f %f", &a, &b);

    if (b == 0) {
        printf("\nError: Devision by zero is not allowed!");
    }

    float quotient = a / b;

    printf("-----------------------------------------------------"); 
    printf("\n%.2f devided by %.2f makes: %.2f\n", a, b, quotient);
    return 0;
}

//Auswahl der rechenart
int main(){
    int choice;
    float a, b, c;

    while(1){
        printf("\nChoose an operation to perform:\n");
        printf("1 - Add 3 numbers\n");
        printf("2 - Subtract 3 numbers\n");
        printf("3 - Multiply 2 numbers\n");
        printf("4 - Divide 2 numbers\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                num_sum(a, b, c);
                break;
            case 2:
                num_sub(a, b, c);
                break;
            case 3:
                num_multip(a, b);
                break;
            case 4:
                num_div(a, b);
                break;
            case 0:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}