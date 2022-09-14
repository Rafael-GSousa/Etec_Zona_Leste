#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");

float R, AREA;

printf("Digite o valor do raio ");
scanf("%f", &R);
AREA = 3.14 * pow(R,2);

printf("O valor da área é %.2f" , AREA);

return 0;

}
