#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float N1, N2, SOMA;

printf ("DIGITE UM NÚMERO: ");
scanf ("%f", &N1);
printf ("DIGITE OUTRO NÚMERO: ");
scanf ("%f", &N2);

SOMA = (N1 + N2);

if (SOMA > 25) {
	printf (" A SOMA DOS NÚMEROS É MAIOR QUE 25\n\n");
}

system ("PAUSE");
return 0;

}
