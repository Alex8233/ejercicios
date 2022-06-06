/*
 * funcion.c
 *
 *  Created on: 22 abr. 2022
 *      Author: fatim
 */


#include <stdio.h>
#include <stdlib.h>
int pedir(int numero[], int tam)
{
	int i;
	for(i = 0; i < tam; i++)
	{
		printf("ingrese un numero:");
		scanf("%d",&numero[i]);
	}
	return 0;
}
int suma(int numero[], int tam)
{
	int i;
	int acomulador;
	acomulador = 0;
	for(i = 0; i<tam; i++)
		{
			acomulador = acomulador + numero[i];
		}
	return acomulador;
}
