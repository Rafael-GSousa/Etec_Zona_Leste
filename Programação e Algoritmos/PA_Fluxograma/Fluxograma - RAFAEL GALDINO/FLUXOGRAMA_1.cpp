#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float A, PERIMETRO;

printf("Digite o valor do lado ");
scanf("%f", &A);
PERIMETRO = 4 * A;

printf("O perímetro é %.2f" , PERIMETRO);

return 0;

}
