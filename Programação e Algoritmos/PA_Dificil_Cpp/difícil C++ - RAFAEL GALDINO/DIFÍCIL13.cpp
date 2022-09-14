#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float A, B, C, DEL, X1, X2;

printf("Equação do Segundo Grau  ");
printf("Digite um valor para A   ");
scanf("%f", &A);
printf("Digite um valor para B   ");
scanf("%f", &B);
printf("Digite um valor para C   ");
scanf("%f", &C);

DEL = pow(B,2) - (4*A*C);
X1 = (-B+sqrt(DEL)) / (2*A);
X2 = (-B-sqrt(DEL)) / (2*A);

printf("O valor de X1 é %.2f e o  valor de X2  é %.2f", X1, X2);

return 0;

}
