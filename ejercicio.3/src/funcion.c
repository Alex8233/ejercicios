/*
 * funcion.c
 *
 *  Created on: 24 abr. 2022
 *      Author: fatim
 */

#include <stdio.h>
#include <stdlib.h>
int sumar1(int numero, int numeroDos)
{
	int suma;
	suma = numero + numeroDos;
	return suma;
}
int sumar2(void)
{
	int numero;
	int numeroDos;
	int suma;
	printf("\ningrese un numero:");
	scanf("%d",&numero);
	printf("\ningrese segundo numero");
	scanf("%d",&numeroDos);
	suma = numero + numeroDos;
	return suma;
}
void sumar3(int numero, int numeroDos)
{
	int suma;
	printf("ingrese un numero:");
	scanf("%d",&numero);
	printf("\ningrese segundo numero");
	scanf("%d",&numeroDos);
	suma = numero + numeroDos;
	printf("\nnumero ingresado: %d",suma);
}
void sumar4(void)
{
	int numero;
	int numeroDos;
	int suma;
	printf("\ningrese un numero:");
	scanf("%d",&numero);
	printf("\ningrese segundo numero");
	scanf("%d",&numeroDos);
	suma = numero + numeroDos;
	printf("\nnumero ingresado: %d",suma);
}
//int pedir(void)
//{
//	int numero;
//
//		printf("Ingrese un numero:");
//		scanf("%d",&numero);
//
//		return numero;
//
//
//}

/*int numeroPar(void)
{
	int numero;
	printf("Ingrese un numero:");
	scanf("%d",&numero);
	if(numero%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}*/
//ejercicio3.1
//void recibir(void)
//{
//	float numero;
//	printf("ingrese un numero:");
//	scanf("%f",&numero);
//	printf("numero ingresado: %.2f",numero);
//
//}
