#include <stdio.h>
#include <stdbool.h>

int main() {
    
    float temp = 25;
    bool sunny = true;

    /*
    // AND operator &&

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad! :(");
    }
    */
    
    /*
    // OR operator ||

    if(temp <= 0 || temp >= 30 || sunny == false){
        printf("\nThe weather is bad! :(");
    }
    else{
        printf("\nThe weather is good!");
    }
    */

    
    // NOT operator !

    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }
    
    

    return 0;
}