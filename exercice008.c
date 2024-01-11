#include<stdio.h>
/*
 8. Cria um programa que leia duas notas de um aluno
 e apresenta a media final
 */
int main(){

  float  n1, n2, result;
	 printf("Digite a primeira nota: ");

	      scanf("%f",&n1);
	 printf("Digite a segunda nota: ");

	      scanf("%f",&n2);

              result= (n1 +  n2)/2;

	 printf("A sua media final eh de %.2f", result);
 return 0;
}
