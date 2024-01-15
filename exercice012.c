/*
 
   012) faça um programa para Ler uma temperatura em graus Celsius e apresentá-la
   convertida em graus Fahrenheit.
   A fórmula de conversão é: F = (9* C + 160) /5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

    Entradas: C
    Processamento: (9* C + 160) /5
    Saída: F
*/

#include<stdio.h>
int main(){
	float c, f;

	
	printf("Digite uma temperatura em graus Celsiu: ");
	scanf("%f", &c);


	f = (9 * c + 160) / 5;

	printf("Em fahrenhei da: %.2f ",  f);

return 0;
}


