/*
 ============================================================================
 Name        : 2.c
 Author      : alex zalazar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
int main(void)
{
	setbuf(stdout,NULL);
	int numero;
	float promedio = 0;
	for (int i = 0; i < 5 ; i = i + 1)
	{
		printf("ingrese un numero:");
		scanf("%d", &numero);
		while(numero == 0);
		{
			printf("ERROR, INGRESE UN NUMERO MAYOR A 0");
			scanf("%d",&numero);
		}
		promedio = promedio + numero;
	}
	promedio = promedio/ 5;
	printf("El promedio: %.2f", promedio);
}
//#define TAM 5
//int main(void) {
//	setbuf(stdout,NULL);
//	int numero[TAM];
//	int acomulador;
//
//	pedir(numero,TAM);
//	acomulador = suma(numero,TAM);
//
//	printf("La cuma es: %d", acomulador);
//	return 0;
//}
