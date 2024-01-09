#include<stdio.h>
#include<stdlib.h>
	
	int main(){
		
	/*
		5. Efectuar a multiplicação de dois numeros digitados pelo usuario e imprimir o resultado na tela.
	*/
		
	int a, b, c;
		
		printf("Digite um numero: ");
			
			scanf("%d", &a);
				
		printf("Digite o segundo numero: ");
			
			scanf("%d", &b);
		
			c = a * b;
				
		printf("O valor da multiplicacao eh %d ", c);
			
	return 0;
	}
