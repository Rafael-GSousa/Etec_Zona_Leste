#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float A, B, M;

printf("Digite um valor para a vari�vel A\n ");
scanf("%f", &A);
printf("Digite um valor para a vari�vel B\n ");
scanf("%f", &B);
M = (A+B) / 2;

printf("A m�dia dos valores � %.2f" , M);

return 0;

}
