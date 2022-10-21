#include <stdio.h>
int main(){
int fatorial;
int numero;
fatorial = 1;
printf("%s", "Escolha, seu número: ");
scanf("%d", &numero);

for(int i = numero ; i > 1; i-- ){
fatorial = fatorial * i;
}
printf("%s", "Seu número fatorial é: ");
printf("%d", fatorial);

return 0;

}