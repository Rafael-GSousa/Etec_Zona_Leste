#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float C, K;

printf("Digite a temperatura em Celsius\n ");
scanf("%f", &C);
K = C + 273.15;

printf("O valor em Kelvin é %2.2f\n" , K);
printf("Tecle ENTER ou ESC para sair do DOS\n");

return 0;

}
