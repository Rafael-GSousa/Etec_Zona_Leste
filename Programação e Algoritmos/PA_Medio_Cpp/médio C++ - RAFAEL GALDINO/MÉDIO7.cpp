#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

int ANO_NASC, ANO_ATUAL, ANO_PROJ, IDADE_ATUAL, IDADE_PROJ;
printf("PROJEÇÃO DE IDADE PARA 2050\n");
printf("DIGITE O ANO DE NASCIMENTO: ");
scanf("%d",&ANO_NASC);
printf("DIGITE O ANO ATUAL: ");
scanf("%d",&ANO_ATUAL);

IDADE_ATUAL = (ANO_ATUAL - ANO_NASC);
ANO_PROJ = (2050);
IDADE_PROJ = (ANO_PROJ - ANO_NASC);

printf("SUA IDADE ATUAL É %d ANOS E SUA IDADE EM 2050 SERÁ DE %d ANOS", IDADE_ATUAL, IDADE_PROJ);
return 0;

}
