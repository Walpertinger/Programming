#include <stdio.h>

int foo(int p){
    if (p <= 0){
        return 0;
    }
    else{
        return p + foo(p - 1);
    }
}

int main(){
    int p;
    printf("Hier 1-9 Zahl einfügen: \n");
    scanf("%d", &p);

    printf("%d", foo(p));
}