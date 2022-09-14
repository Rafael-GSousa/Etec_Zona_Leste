#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float A, QUADRADO;

printf("Digite um número ");
scanf("%f", &A);
QUADRADO = A * A;

printf("O quadrado do número %.2f é %.2f" , A, QUADRADO);

return 0;

}
