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
printf("Digite a quantidade de horas trabalhadas no m�s ");
scanf("%f", &HT);
printf("Digite o numero de dependentes ");
scanf("%f", &ND);
SB = VH*HT;
SL = SB+(BN*ND);
printf("Seu sal�rio bruto � %.2f e o sal�rio liquido � %.2f", SB,SL);

return 0;

}
