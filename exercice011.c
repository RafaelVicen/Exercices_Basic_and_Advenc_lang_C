#include<stdio.h>
/*
 Converte uma quantidade de horas digitadas pelo usuario em minutos
 se o usuario degitar 1h o resultado tem q sair em minutos exe: 60

 */
int main(){
	int horas,minutos;
	printf("Digite uma quantidade de horas: ");
	scanf("%d",&horas);

	minutos = horas * 60;

	printf("%d horas equvale a %d minutos.",horas,minutos);
return 0;
}
