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

int main (){

	float tempo,velocidade,distancia,velocidade_media,litros;
	printf("Digite o tempo: ");
	scanf("%f",&tempo);

	printf("Digite a velocidade: ");
	scanf("%f",&velocidade);

	distancia = tempo * velocidade;
	velocidade_media = distancia / tempo;
	litros = distancia / 15.0f;


	printf("distancia: %f ",distancia);
	printf("velocidade_media:%f ",velocidade_media);
	printf("tempo: %f ",tempo);
	printf("litros: %f ", litros);



	return 0;
}
