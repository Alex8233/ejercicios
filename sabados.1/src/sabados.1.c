/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 *//*Ejercicio 1-1:
Ingresar n?meros enteros, hasta que el usuario lo decida. Calcular y mostrar:
El promedio de los n?meros positivos.
El promedio de los n?meros negativos. */
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero;
	float promedioPositivos;
	float promedioNegativos;
	int contadorNegativos = 0;
	int contadorPositivos = 0;
	int acumuladorPositivos = 0;
	int acumuladorNegativos = 0;
	char seguir;
	do
	{
		printf("ingrese un numero:");
		scanf("%d",&numero);
		if(numero > 0)
		{
			contadorPositivos = contadorPositivos + 1;
			acumuladorPositivos = acumuladorPositivos + numero;
		}
		else if(numero < 0)
		{
			contadorNegativos = contadorNegativos + 1;
			acumuladorNegativos = acumuladorNegativos - numero;
		}
		do
		{
			printf("\n desea seguir s o n:");
			fflush(stdin);
			scanf("%c",&seguir);
		}while(!(seguir == 's' || seguir == 'n'));
	}while(seguir == 's');
	if(contadorPositivos > 0)
	{
		promedioPositivos = (float)acumuladorPositivos / contadorPositivos;
		printf("el promedio de positivos: %.2f \n",promedioPositivos);
	}
	else
	{
		printf("no hay valores positivos");
	}
	if(contadorNegativos > 0)
	{
		promedioNegativos = (float)acumuladorNegativos / contadorNegativos;
		printf("el promedio de negativos: %.2f \n",promedioNegativos);
	}
	else
	{
		printf("No hay valores negativos");
	}


	return EXIT_SUCCESS;
}*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	setbuf(stdout,NULL);
//	int numero;
//
//	int maximo;
//	int minimo;
//	int flag = 0;
//	for(int i = 0;i < 5; i = i + 1)
//	{
//		printf("Ingrese un numero:\n");
//		scanf("%d",&numero);
//		if(flag == 0)
//		{
//			maximo = numero;
//			minimo = numero;
//			flag = 1;
//		}
//		if(numero < minimo)
//		{
//			minimo = numero;
//		}
//		if(numero > maximo)
//		{
//			maximo = numero;
//		}
//	}
//	printf("\n numero maximo: %d",maximo);
//	printf("\n numero minimo: %d",minimo);
//	return EXIT_SUCCESS;
//}
int main(void)
{
	return 0;
}

