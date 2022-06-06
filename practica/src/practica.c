/*
 ============================================================================
 Name        : practica.c
 Author      : alex zalazar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define NUM 10
int funcion(int numero[],int num);
int main(void) {
setbuf(stdout,NULL);
	int numero[NUM];
	funcion(numero,NUM);
}
int funcion(int numero[],int num)
{
	for(int i= 0;i<num;i++)
	{
		printf("\ningrese numero:");
		scanf("%d",numero[i]);
	}
	for(int i=0;i<num;i++)
	{
		if(numero[i]>0)
		{
			printf("Numeros ingresados:%d",numero[i]);

		}
	}
	return 0;
}
