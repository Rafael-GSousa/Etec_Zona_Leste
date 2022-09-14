#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float R, VOL;

printf("Digite o raio de uma esfera  ");
scanf("%f", &R);

VOL = 4/3*(3,14*pow(R,3));

printf("O volume da esfera é %.2f", VOL);

return 0;

}
