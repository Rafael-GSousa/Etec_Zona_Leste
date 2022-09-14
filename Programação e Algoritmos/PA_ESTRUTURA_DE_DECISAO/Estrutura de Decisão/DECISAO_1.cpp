#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float N1, N2, N3, N4, MD;

printf ("DIGITE A 1ª NOTA: ");
scanf ("%f", &N1);
printf ("DIGITE A 2ª NOTA: ");
scanf ("%f", &N2);
printf ("DIGITE A 3ª NOTA: ");
scanf ("%f", &N3);
printf ("DIGITE A 4ª NOTA: ");
scanf ("%f", &N4);

MD = (N1 + N2 + N3 + N4) / 4;

if (MD >= 7) {
	printf ("O ALUNO ALCANÇOU A MÉDIA NECESSÁRIA, MÉDIA RECEBIDA IGUAL A %.2f \n\n", MD);
	printf ("SITUAÇÃO: APROVADO\n\n");
}
else{
	printf ("O ALUNO NÃO ALCANÇOU A MÉDIA, SENDO A MÉDIA RECEBIDA IGUAL A %.2f \n\n", MD);
	printf ("SITUAÇÃO: REPROVADO\n\n");
}
system ("PAUSE");
return 0;

}
