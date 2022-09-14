#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float CM, MT, DC, MM;

printf("Digite uma medida em centímetros ");
scanf("%f", &CM);
MT = CM/100;
DC = CM/10;
MM = CM*10;
printf("Há %f metros na medida informada.", MT);
printf("Há %f decímetros na medida informada.", DC);
printf("Há %f milímetros na medida informada.", MM);

return 0;

}
