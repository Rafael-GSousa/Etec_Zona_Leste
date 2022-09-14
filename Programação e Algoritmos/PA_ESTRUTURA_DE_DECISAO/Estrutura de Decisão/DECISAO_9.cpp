#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

int SENHA;

printf("DIGITE SUA SENHA: \n");
scanf("%d", &SENHA);


if (SENHA == 12345){

	printf("ACESSO PERMITIDO");
}
else{
	
	printf("SENHA INCORRETA");
}
return 0;

}
