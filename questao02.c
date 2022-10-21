#include <stdio.h>

int main(){
float valor, resultado_final;
printf("%s", "Escreva seu valor e descobra o desconto: ");
scanf("%f", &valor);
if (valor > 0 && valor < 100)
{
resultado_final = valor * 0.01;
printf("%s", "O desconto do seu produto é: ");
printf("%f", resultado_final);
}
else if (valor > 100 && valor < 500){
  resultado_final = valor * 0.05;
  printf("%s", "O desconto do seu produto é: ");
  printf("%f", resultado_final);
}
else {
resultado_final = valor * 0.1;
printf("%s", "O desconto do seu produto é: ");
printf("%f", resultado_final);

}

return 0;








}