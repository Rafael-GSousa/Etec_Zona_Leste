#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

char N_FUNC;
int N_DEP;
float BONUS, V_HORA, H_MES, V_BRUTO, V_LIQ;

printf("CÁLCULO DO SALÁRIO LÍQUIDO\n");
printf("DIGITE O NOME DO FUNCIONÁRIO: \n");
scanf("%c",&N_FUNC);
printf("DIGITE O NÚMERO DE DEPENDENTES\n");
scanf("%d",&N_DEP);
printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS NO MÊS\n");
scanf("%f",&H_MES);
printf("DIGITE O VALOR DA HORA\n");
scanf("%f",&V_HORA);
V_BRUTO = (V_HORA * H_MES);
V_LIQ = (V_BRUTO + BONUS);
printf("O VALOR DO SALÁRIO BRUTO DO FUNCIONÁRIO %c É DE R$ %.2f E O VALOR DE SEU SALÁRIO LÍQUIDO É DE R$ %.2f", N_FUNC, V_BRUTO, V_LIQ);

return 0;

}
