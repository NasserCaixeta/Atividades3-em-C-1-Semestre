#include <stdio.h>
int main(){
int nota;
printf("%s", "Dê a sua nota de 0 a 5: ");
scanf("%d", &nota);
if (nota == 1){
printf("%s", "Sua nota é ruim");
}
else if (nota == 2){
  printf("%s", "Sua nota é insuficiente");
}
else if (nota == 3){
printf("%s", "Sua nota é suficiente");  
}
else if (nota == 4){
printf("%s", "Sua nota é boa");  
}
else if (nota == 5){
printf("%s", "Sua nota é ótima");
}
else 
{
  printf("%s", "Coloca uma nota certa seu bobo");
}

return 0;













}