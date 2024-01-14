#include<stdio.h>
int main(){
	float altura, pesoIdeal;
	char sexo;

	scanf("%f", &altura);
	scanf("%c", &sexo);

	pesoIdeal = (72.7 * altura) - 58;

	printf("%c %2.f", sexo, pesoIdeal);

return 0;
}

