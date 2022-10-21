#include <stdio.h>
#include <ctype.h>
int main(){
char tecla_press;
printf("%s", "Escreva seu caractere: ");
scanf("%c", &tecla_press);
 if( isalnum(tecla_press)) { 
 printf("%s", "Isso é um número");
 }
 else if (isalpha(tecla_press)){
 printf("%s", "Isso é um Caractere");

}
else {
  printf("%s", "Isso é um caractere especial!");
}
 







return 0;









}