#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

int N1, N2, DIF, DIF2, ZERO;

printf ("DIGITE UM N�MERO: ");
scanf ("%d", &N1);
printf ("DIGITE OUTRO N�MERO: ");
scanf ("%d", &N2);

DIF = (N1 - N2);
DIF2 = (N2 - N1);

if (N1 > N2) {
	printf ("A DIFEREN�A DE %.2d PARA %.2d � %.2d\n\n", N1, N2, DIF);
}
if (N1 < N2) {
	printf ("A DIFEREN�A DE %.2d PARA %.2d � %.2d\n\n", N1, N2, DIF2);
}
if (N1 == N2) {
	printf ("A DIFEREN�A DE %.2d PARA %.2d � %.2d\n\n", N1, N2, ZERO);
}

system ("PAUSE");
return 0;

}
