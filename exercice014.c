/*
  014 Atribua o nome, sexo, salario e idade de uma pessoa em variaveis.
  Em seguida imprima os valores destas variaveis.

 */


#include<stdio.h>
	int main()
{
		char nome[]="Rafael Vicente";
		char sexo='M';
		int idade=20;
		float salario;

		salario = 4250.90;

		printf("Seus dados sao:\n");
		printf("nome: %s\n",nome);
		printf("sexo: %c\n",sexo);
		printf("voce tem: %d anos\n",idade);
		printf("voce ganha: %.2f kwanza por mes",salario);
	 return 0;
}	 

