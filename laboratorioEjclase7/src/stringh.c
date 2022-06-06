/*
 * stringh.c
 *
 *  Created on: 21 may. 2022
 *      Author: fatim
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void tomarValor(char nombre[],char mensaje[30])
{

	printf("%s",mensaje);
	fflush(stdin);
	gets(nombre);
	printf("su nombre es:%s\n",nombre);

}
int motrarLongitud(char nombre[])
{
	int retorno;

	retorno = strlen(nombre);

	return retorno;
}

void chequearNumero(char nombre[],char mensaje[20],int tam)
{
	int comprobar;
	for(int i= 0;i< tam;i++)
	{
		comprobar= isdigit(nombre[i]);
		if(comprobar !=0)
		{
			printf("\n%s",mensaje);
			break;
		}
	}
}
