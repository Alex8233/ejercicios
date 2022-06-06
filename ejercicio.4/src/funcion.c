/*
 * funcion.c
 *
 *  Created on: 25 abr. 2022
 *      Author: fatim
 */
#include <stdio.h>
#include <stdlib.h>
int pedirC(void)
{

	int c;

	printf("ingrese °C entre punto de ebullicion y solidificacion:");
	scanf("%d",&c);
	while(!(c < 101 && c > -1))
	{
		printf("\nERROR,ingrese °C entre punto de ebullicion y solidificacion:");
		scanf("%d",&c);
	}
	return c;
}
int pedirF(void)
{
	int f;

	printf("\ningrese °F entre punto de ebullicion y solidificacion:");
	scanf("%d",&f);
	while(!(f > 31 && f < 213))
	{
		printf("\nERROR, ingrese °F entre punto de ebullicion y solidificacion:");
		scanf("%d",&f);
	}
	return f;
}
int calculos(int* calculoC,int* calculoF,int gradosC,int gradosF)
{
	*calculoC = (gradosF - 32) / 1.8;
	*calculoF = (gradosC * 1.8) + 32;
	return 0;
}
//int pedir(void)
//{
//	int numero;
//	do{
//		printf("Ingrese un numero:");
//		scanf("%d",&numero);
//	}while(!(numero > 0));
//	return numero;
//}
