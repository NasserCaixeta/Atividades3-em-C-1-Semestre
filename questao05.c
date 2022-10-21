#include <stdio.h>
int main(){
int ano;
printf("%s", "Digite o Ano: ");
scanf("%d", &ano);
if (ano % 400 == 0){
printf("%s", "Seu ano é bissexto");
}
else{
printf("%s", "Seu ano não é bissexto");  
}
return 0;


}