#include <stdio.h>

int main(){

    int x;
    int y;

    printf("hier werden ganze Zahlen auf Gerade und Ungerade geprueft \n");

    printf("gib x ein: ");
    scanf("%d", &x);

    printf("gib y ein: ");
    scanf("%d", &y);

    //if(x || y != int){
    //    printf("Versuch's Nochmal!");
    //}

    if(x || y < 0){
        if(x < 0)
        {x = 0 - x;}
        if(y < 0) 
        {y = y - y;}
    }
    //Hallo
    if(x%2==1 && y%2==1){
        printf("beide Zahlen sind ungerade");
    }    
    else if(x%2==1){
        printf("x ist ungerade, y ist gerade");
    }
    else if(y%2==1){
        printf("x ist gerade, y ist ungerade");
    }
    else {
        printf("beide Zahlen sind gerade");
    }
return 0;
}