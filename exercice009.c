#include<stdio.h>
/*
   9. uma imobilaria vende terrenos retangulares
   faça um programa para ler as dimensões de um terreno
   e depois exebir a araea e comprimento
 */
  int main(){

	  float  h, l, a, c;

	 printf("Digite a altura: ");
	      scanf("%f", &h);

	printf("Digite a largura: ");
             scanf("%f", &l);

	     a = h * l;
 	     c = 2 * h + 2 * l;

	printf("area = %f\n", a);
	printf("comprimento = %f",c);

return 0;
  }



