/*
  013 Tendo como dados de entrada a altura de  uma pessoa
  contrua um programa q calcula um programa 
  que calcule o peso ideial utilizando a formula
  peso idea = (72.7 * h) - 58

Entrada: altura
processamento: (72.7 * h) - 58
saida: pesoIdeal
 */


#include<stdio.h>
int main(){
	float altura, pesoIdeal;
	
	
	printf("Digite a tua altura: ");

	scanf("%f", &altura);
	

	pesoIdeal = (72.7 * altura) - 58;

	printf("O peso ideal eh:  %2.f", pesoIdeal);

return 0;
}

