#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float CM, MT, DC, MM;

printf("Digite uma medida em cent�metros ");
scanf("%f", &CM);
MT = CM/100;
DC = CM/10;
MM = CM*10;
printf("H� %f metros na medida informada.", MT);
printf("H� %f dec�metros na medida informada.", DC);
printf("H� %f mil�metros na medida informada.", MM);

return 0;

}
