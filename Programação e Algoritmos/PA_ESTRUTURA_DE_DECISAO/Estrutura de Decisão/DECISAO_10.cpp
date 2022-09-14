#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

int ANO, IDADE;

printf("DIGITE SEU ANO DE NASCIMENTO: \n");
scanf("%d", &ANO);

IDADE = (2019 - ANO);

if (IDADE >= 18){

	printf("VOCÊ ATINGIU A MAIORIDADE!");
}
else{
	
	printf("VOCÊ AINDA NÃO ATINGIU A MAIORIDADE!");
}
return 0;

}
