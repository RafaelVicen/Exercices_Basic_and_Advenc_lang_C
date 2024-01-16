/*
  016 faça um programa q calcula e apresenta o valor do volume
  de uma lata de oleo, utilizando a formula: volume = 3,14159 * R ^ 2 * altura.

Entradas: altura, R
processamento:  3,14159 * R ^ 2 * altura
saida: volume


 */



#include<stdio.h>
int main()
{

	float altura, R, volume;

	printf("Digite o valor da  altura: ");
	scanf("%f", &altura);

	printf("Digite o valor do  Raio: ");
	scanf("%f",&R);

	volume = 3.14159 * R * R * altura;

	printf("volume = %.2f", volume);

return 0;
}


