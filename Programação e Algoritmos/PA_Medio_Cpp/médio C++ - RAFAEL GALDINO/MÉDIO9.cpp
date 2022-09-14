#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");


float VH, HT, BN, ND, SB, SL;

BN = 300;
printf("Digite o valor da hora ");
scanf("%f", &VH);
printf("Digite a quantidade de horas trabalhadas no mês ");
scanf("%f", &HT);
printf("Digite o numero de dependentes ");
scanf("%f", &ND);
SB = VH*HT;
SL = SB+(BN*ND);
printf("Seu salário bruto é %.2f e o salário liquido é %.2f", SB,SL);

return 0;

}
