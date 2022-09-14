#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

int SEXO;
float ALT, H, M;

printf("CÁLCULO DO PESO IDEAL\n");
printf("VOCÊ É (1)HOMEM OU (2)MULHER?\n");
scanf("%d", &SEXO);
printf("QUAL A SUA ALTURA EM M?\n");
scanf("%f", &ALT);

H = (72.7 * ALT) - 58;
M = (62.1 * ALT) - 44.7;

if (SEXO == 1){

	printf("O SEU PESO IDEAL É %.2f", H);
}
else{
	printf("O SEU PESO IDEAL É %.2f", M);
}
return 0;

}
