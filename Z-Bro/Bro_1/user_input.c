#include <stdio.h>
#include <string.h>

int main() {
    
//Declare 
    char name[25]; //bytes
    int age;

//Type Name
    printf("\nWhats your name?: \n");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

//Type Age
    printf("\nHow old are you?: \n");
    scanf("%d", &age);

//Print out
    printf("\nWhat's up %s", name);
    printf("\nYou are %d years old", age);
    
    return 0;
}