#include <stdio.h>
#include <math.h>
int main(void) {
int numero; 
printf("%s", "digite seu numero para saber se é par ou ímpar: ");
scanf("%d", &numero);
if (numero % 2 == 0)
{ printf("%s", "Seu número é par" );
}
else 
printf("%s", "Seu número é impar");


return 0;

}