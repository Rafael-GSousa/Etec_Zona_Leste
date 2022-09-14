#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float EXC , PESO, MULTA;

printf("MULTA POR EXCESSO DE PESO\n");
printf("INSIRA O PESO TOTAL DOS PEIXES:\n");
scanf("%f", &PESO);

EXC = (PESO - 50);
MULTA = (EXC * 4);

if (PESO > 50){

	printf("O VALOR DA MULTA É R$ %.2f", MULTA);
}

return 0;

}
