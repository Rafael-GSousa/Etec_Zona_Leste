#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float N1, N2, SOMA;

printf ("DIGITE UM N�MERO: ");
scanf ("%f", &N1);
printf ("DIGITE OUTRO N�MERO: ");
scanf ("%f", &N2);

SOMA = (N1 + N2);

if (SOMA > 25) {
	printf (" A SOMA DOS N�MEROS � MAIOR QUE 25\n\n");
}

system ("PAUSE");
return 0;

}
