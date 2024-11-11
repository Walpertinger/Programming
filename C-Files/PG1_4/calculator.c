#include <stdio.h>

//Addiert 2 Zahlen
int num_sum(){
    float a, b;

    printf("\nPlease enter the first number for summation: \n");
    scanf("%f", &a);
    printf("\nPlease enter the second number for summation: \n");
    scanf("%f", &b);
    
    float sum = a + b;

    printf("-----------------------------------------------------");
    printf("\n%.2f + %.2f equals: %.2f\n", a, b, sum);
    return 0;
}

//Subtrahiert 2 Zahlen
int num_sub(){
    float a, b;

    printf("\nPlease enter the first number for subtraction: \n");
    scanf("%f", &a);
    printf("\nPlease enter the second number for subtraction: \n");
    scanf("%f", &b);


    float sub = a - b;

    printf("-----------------------------------------------------");
    printf("\n%.2f - %.2f equals: %.2f\n", a, b, sub);
    return 0;
}

//Multipliziert 2 Zahlen
int num_multip(){
    float a, b;

    printf("\nPlease enter the first number for multiplication: \n");
    scanf("%f", &a);
    printf("\nPlease enter the second number for multiplication: \n");
    scanf("%f", &b);

    float multip = a * b;

    printf("-----------------------------------------------------");
    printf("\n%.2f multiplied with %.2f equals: %.2f\n", a, b, multip);
    return 0;
}

//Dividiert eine durch eine andere Zahl
int num_div(){
    float a, b;
    
    printf("\nPlease enter divident: \n");
    scanf("%f", &a);
    printf("\nPlease enter devisor: \n");
    scanf("%f", &b);

    if (b == 0) {
        printf("\nError: Devision by zero is not allowed!");
    }

    float quotient = a / b;

    printf("-----------------------------------------------------"); 
    printf("\n%.2f devided by %.2f equals: %.2f\n", a, b, quotient);
    return 0;
}

//Auswahl der Rechenart
int main(){
    int choice;

    while(1){
        printf("\nChoose an operation to perform:\n");
        printf("1 - Add 2 numbers\n");
        printf("2 - Subtract 2 numbers\n");
        printf("3 - Multiply 2 numbers\n");
        printf("4 - Divide 2 numbers\n");
        printf("0 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                num_sum();
                break;
            case 2:
                num_sub();
                break;
            case 3:
                num_multip();
                break;
            case 4:
                num_div();
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