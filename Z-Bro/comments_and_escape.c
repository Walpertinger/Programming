#include <stdio.h>

int main(){

    //comments are ignored by compiler
    printf("Hello World"); //this will print "Hello World" in the Terminal

    /*
    With this 
    you can make 
    a multi line
    comment

    */

    /* escape sequences = (\n = newline) or (\t = tab) 
    makes whatever you print out do exactly that*/

    printf("\n\n");
    printf("Hello\tWorld"); // this prints "Hello   World"
    
    printf("\n\n");
    printf("Hello\nWorld"); // this prints "Hello" and in a new line "World"

    return 0; //this is always in the main function
}