#include<stdio.h>
/*
 Uma padaria vende pães pelo valor de 49 kwz.
 cria um programa que calcula qual é o  valor
 arrecadado por dia na padria. 
 suponhando  que a quantidade de pães vendidos é variavel.
 */
int main(){

	int qtdpaes; 
	float total;

	printf("Digite a quantidade de paes: ");
	scanf("%d", &qtdpaes);

	total = qtdpaes * 49;

	printf("foi arrecadado  %.2f kwanza", total);
return 0;
}
