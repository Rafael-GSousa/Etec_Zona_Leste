#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"PORTUGUESE");


float DP, S1, S2, S3;

DP = 500;
printf("O dep�sito inicial � de %.2f", DP);
S1 = DP+((DP/100)*1);  
S2 = S1+((S1/100)*1);
S3 = S2+((S2/100)*1);
printf("O saldo ap�s o terceiro m�s � %f" , S3);

return 0;

}
