#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float A, QUADRADO;

printf("Digite um n�mero ");
scanf("%f", &A);
QUADRADO = A * A;

printf("O quadrado do n�mero %.2f � %.2f" , A, QUADRADO);

return 0;

}
