#include <stdio.h>
 const char passw[]= {"ez1337"};
 
 int check_password(char p[]) {
 int charsPassword = sizeof(passw) / sizeof(char);

 for (int i = 0; i < charsPassword; i++) {
 if(p[i] != passw[i]) {
 return 0; // beendet die Funktion 
}
 }
 return 1; // Passwort korrekt
 }
 int main(){
 char password[10];
 printf("\nBitte geben Sie Ihr Passwort ein: \n");
 fgets(password, 11, stdin);
 // fgets liest den Zeilenvorschub (enter) mit ein
 // ersetzt enter durch das String-Ende-Zeichen
 password[strlen(password)-1] = '\0';
 if(check_password(password)) {
 printf("\nWillkommen im System\n");
 }
 else{
 printf("\nFalsches Passwort. Zugriff verweigert.\n"); 
} 
return 0; }