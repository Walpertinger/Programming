#include <stdio.h>

int func_1(int input);
int func_2();

int i;

int main()
{
    int j;
    i = 5, j = 2;

    printf("i ist %i und j ist %i \n", i, j);

    i = func_1(j);
    printf("i = f1(j) ist %i und j ist %i \n", i, j);

    i = func_2(); 
    printf("i = f2() ist % und j ist %i", i, j);
    
    return 0;
}