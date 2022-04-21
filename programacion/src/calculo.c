/*
 * calculo.c
 *
 *  Created on: 7 abr. 2022
 *      Author: fatim
 */
#include <stdio.h>
#include <stdlib.h>


int sumar(void)
{
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int retorno;
	printf("ingrese un numero:");
	scanf("%d",&numero1);
	printf("\n ingrese otro numero:");
	scanf("%d",&numero2);
	retorno = numero1 + numero2;
	return retorno;

}

