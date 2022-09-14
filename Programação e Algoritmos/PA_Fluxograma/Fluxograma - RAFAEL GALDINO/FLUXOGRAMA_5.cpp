#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float A, B, M;

printf("Digite um valor para a variável A\n ");
scanf("%f", &A);
printf("Digite um valor para a variável B\n ");
scanf("%f", &B);
M = (A+B) / 2;

printf("A média dos valores é %.2f" , M);

return 0;

}
