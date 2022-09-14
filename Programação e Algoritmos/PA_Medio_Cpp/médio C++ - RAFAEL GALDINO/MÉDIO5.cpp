#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float X, N, RES;
printf("CALCULE A MULTIPLICAÇÃO DE X E N, ELEVADOS À 2ª POTÊNCIA\n");
printf("DIGITE O VALOR DE X ");
scanf("%f",&X);
printf("DIGITE O VALOR DE N ");
scanf("%f",&N);

RES = pow(X * N, 2);

printf("O RESULTADO É %.2f", RES);
return 0;

}
