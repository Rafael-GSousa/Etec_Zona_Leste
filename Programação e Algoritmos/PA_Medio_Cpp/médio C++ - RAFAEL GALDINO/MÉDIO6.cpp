#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float BASE, ALTURA, AREA;
printf("CALCULE A �REA DO TRI�NGULO\n");
printf("DIGITE O VALOR DA BASE ");
scanf("%f",&BASE);
printf("DIGITE O VALOR DE ALTURA ");
scanf("%f",&ALTURA);

AREA = (BASE * ALTURA) / 2;

printf("O RESULTADO � %.2f", AREA);
return 0;

}
