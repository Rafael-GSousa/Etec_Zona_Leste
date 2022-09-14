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

printf("A área externa de uma lata é %.2f", AREA);

return 0;

}
