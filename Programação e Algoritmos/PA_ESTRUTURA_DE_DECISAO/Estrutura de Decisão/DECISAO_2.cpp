#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

int N;

printf ("DIGITE UM NÚMERO: ");
scanf ("%d", &N);


if (N % 2 == 0) {
	printf ("O NÚMERO %.2d É PAR\n\n", N);
}
else{
	printf ("O NÚMERO %.2d É ÍMPAR\n\n", N);
}
system ("PAUSE");
return 0;

}
