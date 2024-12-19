#include <stdio.h>
#include <stdbool.h>

int main(){

    //there is more than just int, float or char...

    //bools are true or false
    bool e = true;  //1 byte of space
    if (e == true){
        printf("e is true\n");
    }



    //with char you can do much more than just represent letters
    char f = 120;
    printf("\nchar as a number?: %d\n", f); //1 byte
    printf("\nchar as a character: %c\n", f); 
    //this is because of ASCII table

    //what about the other way around?
    int d = 50;
    printf("\nint as number: %d\n", d); //4 bytes
    printf("\nint as character?: %c\n", d);
    //this goes from -128 to 127

    //or we use unsigned char:
    unsigned char p = 170;
    printf("\nunsigned char as number: %d\n", p);
    printf("\nunsigned char as character: %c\n", p);
    //unsigned chars are the characters of -128 and 127 merged to 255

    //short ints
    short int h = 32767; // 2 bytes
    //or
    unsigned short int i = 65535; // 2 bytes
    //they use 2 bytes of memory (not 4 like regular int)

    long long int j = 999999999999999999; // 8 bytes
    printf("\nlong long int: %lld\n", j);

    //format specifiers: with %d or %f or %lf etc you can 
    //print whatever variable you have (as we did before)
    //but you should also know, that with example:
    //%.15lf you can print out all 15 floatingpoints of
    //your number.
    //%20.15lf would make an extra 5 empty spaces in there
    
    double o = 1.111111111111111;
    printf("\nlong number: %20.15lf\n", o);

    //these are ways to make the outcome look better

    float alpha = 8.00;
    float beta = 20.45;
    float gamma = 175.66;

    printf("\nalpha = %8.2f$", alpha);
    printf("\nbeta  = %8.2f$", beta);
    printf("\ngamma = %-8.2f$", gamma);

    return 0;
}