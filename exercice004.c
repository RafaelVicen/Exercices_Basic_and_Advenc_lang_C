#include<stdio.h>
#include<stdlib.h>

/*
        4. Efectua a soma de 3 numeros digitados pelo usuario e imprirmir o resultado

*/

        int main()
        {
                int a, b, c, result;
                        printf("Insira o primeiro numero: ");

                                scanf("%d", &a);

                        printf("Insira o segundo numero: ");
                                scanf("%d", &b);

                        printf("Insira o terceiro numero: ");
                                scanf("%d", &c);

                result = a + b + c;
                        printf("O resultado da soma eh %d\n", result);
                
                return 0;

        }
