/*
  014 Atribua o nome, sexo, salario e idade de uma pessoa em variaveis.
  Em seguida imprima os valores destas variaveis.

 */


#include<stdio.h>
	int main()
{
		char nome[] = "Rafael Vicente";
		char sexo = 'M';
		int idade = 35;
		float salario;

		salario = 4250.90;

		printf("Seus dados sao ");
		printf("Nome: %s", nome );
		printf("sexo %c", sexo  );
		printf("voce tem %d anos", idade);
		printf("voce ganha %f kwanza por mes", salario);
	 return 0;
}	 

