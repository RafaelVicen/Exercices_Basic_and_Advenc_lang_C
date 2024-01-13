#include<stdio.h>
int main(){
	int a,b;
	printf("Digite uma quantidade em horas: ");
	scanf("%d",&a);

	b = a * 60;

	printf("%dhoras equvale a %d minutos.",a,b);
return 0;
}
