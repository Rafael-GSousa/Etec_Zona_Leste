#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

int N;

printf ("DIGITE UM N�MERO: ");
scanf ("%d", &N);


if (N % 2 == 0) {
	printf ("O N�MERO %.2d � PAR\n\n", N);
}
else{
	printf ("O N�MERO %.2d � �MPAR\n\n", N);
}
system ("PAUSE");
return 0;

}
