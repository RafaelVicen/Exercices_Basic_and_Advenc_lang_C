
/*
 015- faça um programa para calcular quantas ferraduras sao
 necessarias para equipar todos os cavalos comprados para um haras
 Tenha como entrada de dados a quantidade de cavalos do haras.
 */


#include<stdio.h>

int main()
{

	int qtdcavalos, qtdferraduras;

	    printf("Digite a quantidade de cavalos: ");
	    scanf("%d", &qtdcavalos);


	    qtdferraduras = qtdcavalos * 4;
	    printf("sao necessario %d ferraduras para equipar %d cavalos.",qtdferraduras,qtdcavalos);
return 0;
}
