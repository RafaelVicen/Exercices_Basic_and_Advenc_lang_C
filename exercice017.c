/*
   cria um programa q efectua o calculo da quantidade de litros de combustivel
   gastos em uma viagem, utilizando um automovl que faz 15km por litro
   para obter o calculo o usuario deve fornecer o tempo gasto e a velocidade media
   com a formula Distancia = tempo * velocidade.
   O programa deve apresentar a distancia percorrida e a quantidade de litros 
   utilizados na viagem.
   
   Entradas: Tempo e a velocidade

   Processamento: Distancia = tempo * velocidade, 
   velocidade_media = distancia / tempo, 
   litros = distancia / 15

   Saida: Distancia, velocidade media, tempo, litros.
*/

#include<stdio.h>

#define texto "Resultado na tela"

int main ()
{

	

	float tempo,velocidade,distancia,velocidade_media,litros;
	printf("Digite o tempo: ");
	scanf("%f",&tempo);

	printf("Digite a velocidade: ");
	scanf("%f",&velocidade);

	printf("--------------------------------------");
	printf("%s", texto);
	printf("--------------------------------------\n");		

	distancia = tempo * velocidade;
	velocidade_media = distancia / tempo;
	litros = distancia / 15.0f;


	printf("\tdistancia percorrida: %.2f \n",distancia);
	printf("\tvelocidade_media:%.2f \n",velocidade_media);
	printf("\ttempo: %.2f \n",tempo);
	printf("\tlitros gastos: %.2f ", litros);



	return 0;
}
