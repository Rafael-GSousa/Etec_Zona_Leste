#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float N1, N2, N3, N4, MD;

printf ("DIGITE A 1� NOTA: ");
scanf ("%f", &N1);
printf ("DIGITE A 2� NOTA: ");
scanf ("%f", &N2);
printf ("DIGITE A 3� NOTA: ");
scanf ("%f", &N3);
printf ("DIGITE A 4� NOTA: ");
scanf ("%f", &N4);

MD = (N1 + N2 + N3 + N4) / 4;

if (MD >= 7) {
	printf ("O ALUNO ALCAN�OU A M�DIA NECESS�RIA, M�DIA RECEBIDA IGUAL A %.2f \n\n", MD);
	printf ("SITUA��O: APROVADO\n\n");
}
else{
	printf ("O ALUNO N�O ALCAN�OU A M�DIA, SENDO A M�DIA RECEBIDA IGUAL A %.2f \n\n", MD);
	printf ("SITUA��O: REPROVADO\n\n");
}
system ("PAUSE");
return 0;

}
