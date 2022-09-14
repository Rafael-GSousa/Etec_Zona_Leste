#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float A, B, SOMA;

printf("Digite o valor de A ");
scanf("%f", &A);
printf("Digite o valor de B ");
scanf("%f", &B);
SOMA = A + B;

printf("O resultado da soma é %.2f" , SOMA);

return 0;

}
