#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

char N_FUNC;
int N_DEP;
float BONUS, V_HORA, H_MES, V_BRUTO, V_LIQ;

printf("C�LCULO DO SAL�RIO L�QUIDO\n");
printf("DIGITE O NOME DO FUNCION�RIO: \n");
scanf("%c",&N_FUNC);
printf("DIGITE O N�MERO DE DEPENDENTES\n");
scanf("%d",&N_DEP);
printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS NO M�S\n");
scanf("%f",&H_MES);
printf("DIGITE O VALOR DA HORA\n");
scanf("%f",&V_HORA);
V_BRUTO = (V_HORA * H_MES);
V_LIQ = (V_BRUTO + BONUS);
printf("O VALOR DO SAL�RIO BRUTO DO FUNCION�RIO %c � DE R$ %.2f E O VALOR DE SEU SAL�RIO L�QUIDO � DE R$ %.2f", N_FUNC, V_BRUTO, V_LIQ);

return 0;

}
