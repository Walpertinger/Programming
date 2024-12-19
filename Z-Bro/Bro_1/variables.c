#include <stdio.h>

int main(){

    // Basic Variables: Integer (int), Floatingpoint (float), Character (char)   

    int x; //declaration
    x = 123; //initialization
    int y = 321; //both at once

    int age = 21; //Variables should represent what they are or do in the code

    float pi_f = 3.141592; //Gleitkommazahlen
    printf("\npi_f is: %f", pi_f); //genauigkeit von 6-7 Nachkommastellen 
    
    double pi_d = 3.14159265358979323846; //längere Gleitkommazahl
    printf("\npi_d is: %.20lf", pi_d); //genauikgeit von 15-16 Nachkommastellen
    // mit %.15lf setzt man die Ausgabe auf 15 Nachkomma, sonst standard -> 6 
   
    char letter = 'H'; //nur ein character
    printf("\nthe letter is: %c", letter);

    char word[] = "Hallo"; //eine liste an characters
    printf("\nthe word is: %s", word);
    
    return 0;
}