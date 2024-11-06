#include <stdio.h>

int main(){
    int age = 0;
    float hight = 0.0;
    printf("give your age in years: \n");
    scanf("%d", &age);

    printf("give your hight in m: \n");
    scanf("%f", &hight);

    printf("your age is: %d\n", age);
    printf("your hight size is: %.2f\n", hight);

    return 0;
}