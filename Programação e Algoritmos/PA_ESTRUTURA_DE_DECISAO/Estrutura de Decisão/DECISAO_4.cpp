#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float N1, N2;

printf ("DIGITE UM N�MERO: ");
scanf ("%f", &N1);
printf ("DIGITE OUTRO N�MERO: ");
scanf ("%f", &N2);


if (N1 > N2) {
	printf ("O N�MERO %.2f � O MAIOR\n\n", N1);
	printf ("O N�MERO %.2f � O MENOR\n\n", N2);
}
if (N1 < N2) {
	printf ("O N�MERO %.2f � O MAIOR\n\n", N2);
	printf ("O N�MERO %.2f � O MENOR\n\n", N1);
}
if (N1 == N2) {
	printf ("O N�MERO %.2f � O IGUAL A %.2f\n\n", N1, N2);
}

system ("PAUSE");
return 0;

}
