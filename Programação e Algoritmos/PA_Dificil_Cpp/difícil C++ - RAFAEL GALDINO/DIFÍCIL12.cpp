#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float SEG, HR, MIN;

printf("Digite um valor em segundos ");
scanf("%f", &SEG);

MIN = SEG/60;
HR = MIN/60;

printf("Os segundos informados correspondeM à %.2f minuto(s)\n", MIN);
printf("Os segundos informados correspondeM à %.2f hora(s)", HR);


return 0;

}
