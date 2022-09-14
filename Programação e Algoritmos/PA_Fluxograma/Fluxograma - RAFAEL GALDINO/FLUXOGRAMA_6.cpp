#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float PESO, ALT, IMC;

printf("Digite o seu peso\n ");
scanf("%f", &PESO);
printf("Digite a sua altura\n ");
scanf("%f", &ALT);
IMC = PESO / pow(ALT,2);

printf("Seu IMC é igual a %2.2f" , IMC);
printf("Tecle enter para sair do DOS\n");

return 0;

}
