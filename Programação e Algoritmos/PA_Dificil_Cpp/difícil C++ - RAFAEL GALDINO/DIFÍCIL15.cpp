#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float R, ALT, AREA;

printf("Digite o raio de uma lata   ");
scanf("%f", &R);
printf("Digite a altura de uma lata   ");
scanf("%f", &ALT);

AREA = 2*(3,14*R*ALT);

printf("A �rea externa de uma lata � %.2f", AREA);

return 0;

}
